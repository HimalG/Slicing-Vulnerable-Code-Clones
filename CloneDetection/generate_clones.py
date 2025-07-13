from pymongo import MongoClient
from datasketch import MinHash, MinHashLSH
#MinHash: Efficiently estimates similarity between sets. Good for comparing feature vectors.
#LSH (Locality Sensitive Hashing): Quickly finds approximate nearest neighbors (similar vectors) without comparing all possible pairs.

# Output file paths for clone groups and pairs
GROUPS_OUTPUT_PATH = "clone_groups.txt"
PAIRS_OUTPUT_PATH = "clone_pairs.txt"

def bucket(value):
    """
    Convert a numeric value into a categorical bin.
    These bins are designed based on the observed value ranges in the datasets.
    """
    if value < 0.0001:
        return "bin_0"
    elif value < 0.001:
        return "bin_1"
    elif value < 0.01:
        return "bin_2"
    elif value < 0.1:
        return "bin_3"
    elif value < 0.5:
        return "bin_4"
    elif value < 1.0:
        return "bin_5"
    elif value < 1.5:
        return "bin_6"
    else:
        return "bin_7"

def minhash_slicing_vector(slicing_vector):
    """
    Generate a MinHash signature for a given slicing vector using binned feature values.
    This increases the likelihood of matching similar values by grouping them.
    """
    m = MinHash(num_perm=128)
    for key, value in slicing_vector.items():
        if value is not None:
            binned_value = bucket(value)
            token = f"{key}:{binned_value}"
            m.update(token.encode("utf8"))
    return m

def main():
    # Connect to MongoDB on localhost and access the "SliceMetricsDB" database.
    client = MongoClient("mongodb://localhost:27017/")
    db = client["SliceMetricsDB"]
    training_collection = db["TrainingVectors"]
    testing_collection = db["TestVectorData"]                  
    # Create an LSH index with a similarity threshold of 0.8 for training vectors.
    lsh = MinHashLSH(threshold=0.8, num_perm=128)
    # two vectors must have Jaccard similarity ≥ 0.8 to be considered clones.

    # Build the LSH index from TrainingVectors using the unique 'id' field.
    for doc in training_collection.find():
        training_id = doc.get("Id")
        slicing_vector = {
            "Slice_Count": doc.get("SC"),
            "Slice_Coverage": doc.get("SCvg"),
            "Slice_Identifier": doc.get("SI"),
            "Slice_Spatial": doc.get("SS")
        }
        if training_id is not None and all(val is not None for val in slicing_vector.values()):
            key = f"train:{training_id}"
            minhash = minhash_slicing_vector(slicing_vector)
            lsh.insert(key, minhash)

    # Dictionary to record clone groups for each testing vector.
    # Key: testing vector's unique id, Value: list of similar training keys.
    clone_groups = {}
    # Set to record unique clone pairs as tuples (training_id, testing_id)
    clone_pairs = set()

    # Process each TestingVector (which is now in the same format as TrainingVectors)
    for doc in testing_collection.find():
        test_id = doc.get("Id")
        slicing_vector = {
            "Slice_Count": doc.get("SC"),
            "Slice_Coverage": doc.get("SCvg"),
            "Slice_Identifier": doc.get("SI"),
            "Slice_Spatial": doc.get("SS")
        }
        if test_id is not None and all(val is not None for val in slicing_vector.values()):
            test_minhash = minhash_slicing_vector(slicing_vector)
            # Query the LSH index for similar training vectors.
            similar_train_keys = lsh.query(test_minhash)
            if similar_train_keys:
                clone_groups[test_id] = similar_train_keys
                for train_key in similar_train_keys:
                    # Extract the original training id (removing "train:" prefix).
                    train_id = train_key.split("train:")[1]
                    pair = tuple(sorted([str(train_id), str(test_id)]))
                    clone_pairs.add(pair)

    # Write clone groups to file.
    with open(GROUPS_OUTPUT_PATH, "w") as group_file:
        for test_id, train_keys in clone_groups.items():
            group_file.write(f"Test id: {test_id}\n")
            for train_key in train_keys:
                train_id = train_key.split("train:")[1]
                group_file.write(f"  Similar Training id: {train_id}\n")
            group_file.write("\n")
        group_file.write(f"Total number of test vectors with clone groups: {len(clone_groups)}\n")

    # Write clone pairs to file.
    with open(PAIRS_OUTPUT_PATH, "w") as pair_file:
        for pair in clone_pairs:
            pair_file.write(f"Clone Pair: {pair[0]}, {pair[1]}\n")
        pair_file.write(f"Total number of clone pairs: {len(clone_pairs)}\n")

    print(f"Clone groups have been saved to {GROUPS_OUTPUT_PATH}")
    print(f"Clone pairs have been saved to {PAIRS_OUTPUT_PATH}")
    print(f"Total number of clone groups: {len(clone_groups)}")
    print(f"Total number of clone pairs: {len(clone_pairs)}")

if __name__ == "__main__":
    main()
