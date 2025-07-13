import csv
import sys
from pymongo import MongoClient

class DatabaseManager:
    def __init__(self, database_url="mongodb://localhost:27017/", database_name="SliceMetricsDB"):
        self.client = MongoClient(database_url)
        self.database = self.client[database_name]
    
    def get_next_id(self, collection_name):
        collection = self.database[collection_name]
        last_doc = collection.find_one(sort=[("Id", -1)])
        if last_doc is None or "Id" not in last_doc:
            return 1
        else:
            return last_doc["Id"] + 1

    def insert_document(self, collection_name, document):
        collection = self.database[collection_name]
        collection.insert_one(document)

def main():
    # Increase the CSV field size limit to handle very large fields
    max_int = sys.maxsize
    while True:
        try:
            csv.field_size_limit(max_int)
            break
        except OverflowError:
            max_int //= 10

    # Prompt user for the CSV file path
    csv_file_path = input("Enter the path to your CSV file: ").strip()
    
    # Create a DatabaseManager instance
    db_manager = DatabaseManager()
    collection_name = "TrainingVector"
    
    try:
        # Determine starting Id from existing records in the collection (or 1 if empty)
        counter = db_manager.get_next_id(collection_name)
        
        # Open and read the CSV file
        with open(csv_file_path, "r", encoding="utf-8") as csv_file:
            reader = csv.DictReader(csv_file)
            
            # For each row, extract the required fields, add auto-incremented "Id", and insert into MongoDB
            for row in reader:
                document = {
                    "Id": counter,
                    "CVE_ID": row["CVE_ID"],
                    "SC": float(row["Slice_Count"]) if row["Slice_Count"] else None,
                    "SCvg": float(row["Slice_Coverage"]) if row["Slice_Coverage"] else None,
                    "SI": float(row["Slice_Identifier"]) if row["Slice_Identifier"] else None,
                    "SS": float(row["Slice_Spatial"]) if row["Slice_Spatial"] else None
                }
                db_manager.insert_document(collection_name, document)
                counter += 1
        
        print(f"Data inserted into '{collection_name}' collection successfully!")
    
    except FileNotFoundError:
        print("Error: The specified CSV file path is invalid or does not exist.")
    except KeyError as e:
        print(f"Error: Missing required column in CSV: {e}")
    except ValueError as ve:
        print(f"Error while converting numeric values: {ve}")
    except Exception as ex:
        print(f"An unexpected error occurred: {ex}")
    finally:
        db_manager.client.close()
        print("MongoDB connection closed.")

if __name__ == "__main__":
    main()
