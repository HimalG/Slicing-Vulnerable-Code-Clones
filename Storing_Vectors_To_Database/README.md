# Storing_Vectors_To_Database

This folder contains scripts for importing CSV-based slicing vector data into a MongoDB database for vulnerability analysis. Each script serves a different use case, depending on whether data should be appended or replaced in the database.

## Contents

### 1. `CSVtoMongoDB_ManualInsertion.py`
- **Purpose**: Inserts slicing vector data from a CSV file into the MongoDB collection `TrainingVectors`.
- **Features**:
  - Prompts user for CSV file path.
  - Auto-generates unique sequential `Id` values.
  - Preserves existing data in the collection.
  - Gracefully handles common file and data format errors.

### 2. `CSVtoMongoDB_BatchInsertion.py`
- **Purpose**: Bulk inserts slicing vector data from a predefined CSV file into the `TrainingVectors` collection.
- **Features**:
  - Assumes CSV includes `Id` and required numeric fields.
  - Clears the existing collection before inserting.
  - Uses batch insertion (`insert_many`) for better performance.
  - Hardcoded CSV path: `./TrainingDataset/Data/TrainingData.csv`.

## Prerequisites

- Python 3.x
- MongoDB running locally (`mongodb://localhost:27017/`)
- Required packages:
  ```bash
  pip install pymongo
