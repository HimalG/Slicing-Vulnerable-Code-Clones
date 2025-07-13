# Categorizing_TestingSlices_Into_Folders&Files

This folder contains two scripts to organize testing slice data into structured folders and files based on libvirt source paths.

## Scripts

### 1. `FolderFile-Extractor.py`
- Creates folders and empty files under `Categorized_TestingSlices_Libvirt/` based on file paths from the input file.
- Run:
  ```bash
  python FolderFile-Extractor.py

### 2. `FileWriting.py`
- Writes each line from the input file into the corresponding file created by the first script.
- Matches folder and file paths under `Categorized_TestingSlices_Libvirt/`.
- Run:
  ```bash
  python FileWriting.py

## Input Format
Each line should start with a path like:
  ```bash
  libvirt-1.1.0/tools/virsh.c,...slice data...

## Usage Order
1. Run FolderFile-Extractor.py
2. Run FileWriting.py (with the same input file)