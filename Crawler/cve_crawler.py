import requests
from bs4 import BeautifulSoup
import re
import os

# Set headers for the web requests
HEADERS = {
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/58.0.3029.110 Safari/537.36'
}

# Directory to save CVE patch data
OUTPUT_DIR = 'cve_data'
os.makedirs(OUTPUT_DIR, exist_ok=True)

def fetch_cve_links(kernel_version="5.1"):
    """Fetch CVE links for a specified kernel version from cvedetails.com."""
    base_url = "https://www.cvedetails.com/version-list/45/47/1/Linux-Linux-kernel.html"
    response = requests.get(base_url, headers=HEADERS)
    soup = BeautifulSoup(response.text, "html.parser")
    
    # Search for CVE links related to the kernel version
    cve_links = []
    for link in soup.find_all('a', href=True):
        if 'CVE-' in link.text:
            cve_links.append(f"https://www.cvedetails.com{link['href']}")

    print(f"Found {len(cve_links)} CVE links for kernel version {kernel_version}")
    return cve_links

def fetch_cve_patch(cve_url):
    """Fetch patch link from a CVE page."""
    response = requests.get(cve_url, headers=HEADERS)
    soup = BeautifulSoup(response.text, "html.parser")

    # Locate the patch link
    patch_url = None
    for link in soup.find_all('a', href=True):
        if 'kernel/git/torvalds/linux.git/commit' in link['href']:
            patch_url = link['href']
            break

    return patch_url

def download_patch(patch_url, cve_id):
    """Download the patch diff and save it to a file."""
    response = requests.get(patch_url, headers=HEADERS)
    if response.status_code == 200:
        file_path = os.path.join(OUTPUT_DIR, f"{cve_id}.diff")
        with open(file_path, 'w') as file:
            file.write(response.text)
        print(f"Patch for {cve_id} saved to {file_path}")
    else:
        print(f"Failed to download patch for {cve_id}")

def main():
    # Step 1: Fetch CVE links
    kernel_version = "5.1"
    cve_links = fetch_cve_links(kernel_version=kernel_version)

    # Step 2: Process each CVE link
    for cve_link in cve_links:
        # Extract CVE ID from URL
        cve_id = re.search(r'CVE-\d{4}-\d+', cve_link).group()
        
        # Fetch patch link for the CVE
        patch_url = fetch_cve_patch(cve_link)
        if patch_url:
            download_patch(patch_url, cve_id)
        else:
            print(f"No patch found for {cve_id}")

if __name__ == "__main__":
    main()
