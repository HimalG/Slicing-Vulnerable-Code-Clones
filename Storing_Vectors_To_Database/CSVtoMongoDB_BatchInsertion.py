import csv
import sys
from pymongo import MongoClient

def main():
    # Set CSV field size limit without overflowing
    max_int = sys.maxsize
    while True:
        try:
            csv.field_size_limit(max_int)
            break
        except OverflowError:
            max_int = int(max_int / 10)
    
    # MongoDB connection parameters
    database_url = "mongodb://localhost:27017/"
    database_name = "SliceMetricsDB"
    collection_name = "TrainingVectors"
    
    # Connect to MongoDB
    client = MongoClient(database_url)
    db = client[database_name]
    collection = db[collection_name]
    
    # Optionally clear the collection before inserting new documents
    collection.delete_many({})
    
    # CSV file path (using forward slashes to avoid escape sequence issues)
    csv_file = "./TrainingDataset/Data/TrainingData.csv"
    
    batch_size = 1000  # Adjusted based on memory and performance needs
    batch = []
    total_inserted = 0
    
    with open(csv_file, "r", newline='', encoding="utf-8") as file:
        reader = csv.DictReader(file)
        for row in reader:
            # Extract only the required columns and convert them appropriately
            document = {
                "Id": int(row["id"]) if row["id"] else None,
                "CVE_ID": row["CVE_ID"],
                "SC": float(row["Slice_Count"]) if row["Slice_Count"] else None,
                "SCvg": float(row["Slice_Coverage"]) if row["Slice_Coverage"] else None,
                "SI": float(row["Slice_Identifier"]) if row["Slice_Identifier"] else None,
                "SS": float(row["Slice_Spatial"]) if row["Slice_Spatial"] else None
            }
            batch.append(document)
            
            # Insert in batches
            if len(batch) >= batch_size:
                collection.insert_many(batch)
                total_inserted += len(batch)
                print(f"Inserted {len(batch)} documents (Total: {total_inserted})")
                batch = []
    
        # Insert any remaining documents
        if batch:
            collection.insert_many(batch)
            total_inserted += len(batch)
            print(f"Inserted {len(batch)} documents (Total: {total_inserted})")
    
    print("All documents inserted successfully.")

if __name__ == "__main__":
    main()
