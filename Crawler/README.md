# Linux Kernel CVE Patch Downloader

This script scrapes CVE patch information for a specified Linux kernel version from [cvedetails.com](https://www.cvedetails.com), extracts patch links (from kernel git commits), and downloads the patch diffs locally.

## Features

- Scrapes CVE links from the Linux kernel version page.
- Extracts associated patch links from each CVE detail page.
- Downloads patch diffs and saves them locally.

## Output

- Patch files are saved in the `cve_data/` directory with filenames like `CVE-YYYY-NNNN.diff`.

## Requirements

- Python 3.x
- Packages:
  ```bash
  pip install requests beautifulsoup4


