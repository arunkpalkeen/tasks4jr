#!/bin/bash
# simulate_disk_pressure.sh - Create significant Disk I/O pressure

echo "Simulating high Disk I/O pressure..."

# Directory to perform Disk I/O operations
TARGET_DIR="/tmp/disk_io_test"

# Number of files to create
NUM_FILES=20

# Size of each file in MB
FILE_SIZE_MB=500

# Ensure the target directory exists
mkdir -p "$TARGET_DIR"

# Function to write large files continuously
write_intensive() {
    for i in $(seq 1 "$NUM_FILES"); do
        file_path="${TARGET_DIR}/write_file_${i}.bin"
        echo "Writing $FILE_SIZE_MB MB to $file_path..."
        dd if=/dev/zero of="$file_path" bs=1M count="$FILE_SIZE_MB" oflag=direct status=none &
    done
}

# Function to read large files continuously
read_intensive() {
    while true; do
        for file in "$TARGET_DIR"/write_file_*.bin; do
            if [ -f "$file" ]; then
                echo "Reading from $file..."
                dd if="$file" of=/dev/null bs=1M iflag=direct status=none &
            fi
        done
    done
}

# Start write-intensive operations
write_intensive

# Give write operations a head start
sleep 10

# Start read-intensive operations
read_intensive &

# Inform the user
echo "Disk I/O pressure simulation in progress. Use tools like 'iotop' or 'iostat' to monitor activity."
echo "Press Ctrl+C to stop the simulation."

# Keep the script running to maintain the pressure
wait

