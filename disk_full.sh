#!/bin/bash
# fill_disk.sh - Fill up disk with files of varying sizes to simulate a full disk

# Prompt user for the target directory
read -p "Enter the directory to fill (e.g., /tmp or /): " TARGET_DIR

# Check if the directory exists
if [[ ! -d "$TARGET_DIR" ]]; then
    echo "Directory $TARGET_DIR does not exist. Exiting."
    exit 1
fi

# Threshold for free space to stop filling (e.g., stop when less than 100MB free)
FREE_SPACE_THRESHOLD_MB=100

echo "Starting disk fill operation in $TARGET_DIR..."
echo "Filling disk until free space is less than ${FREE_SPACE_THRESHOLD_MB}MB."

# Function to convert bytes to human-readable format
human_readable() {
    numfmt --to=iec-i --suffix=B --padding=7 $1
}

# Loop to create files until free space is below threshold
file_count=1
while true; do
    # Check available space in MB
    available_space=$(df --output=avail -m "$TARGET_DIR" | tail -1)

    if (( available_space < FREE_SPACE_THRESHOLD_MB )); then
        echo "Reached free space threshold of ${FREE_SPACE_THRESHOLD_MB}MB. Stopping file creation."
        break
    fi

    # Generate a random file size between 50MB and 500MB
    file_size=$(( (RANDOM % 450) + 50 ))  # Size in MB
    file_path="${TARGET_DIR}/file_${file_count}.bin"

    # Create the file
    echo "Creating file $file_path with size $(human_readable $((file_size * 1024 * 1024)))..."
    dd if=/dev/zero of="$file_path" bs=1M count="$file_size" status=none

    # Increment file counter
    file_count=$((file_count + 1))  # Replace file_count++
done

echo "Disk fill operation complete. Use commands and 'find' to locate and clear large files if needed."

