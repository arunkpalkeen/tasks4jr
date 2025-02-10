#!/bin/bash
# Enhanced memory pressure script to simulate low memory conditions

echo "Creating high memory pressure..."

# Function to allocate a large amount of memory in each iteration
memory_hog() {
    while true; do
        # Allocate 500 MB chunks to consume memory quickly
        temp=$(head -c 500M </dev/zero | tr '\0' '\040')
        sleep 1
    done
}

# Start multiple instances to increase memory consumption quickly
for i in {1..20}; do
    memory_hog &
done

echo "Memory pressure created. Monitor memory usage with 'free -h' or 'top'."

# Keep the script running to maintain memory usage for troubleshooting
sleep 60  # Adjust this sleep time if needed to keep memory hogging active

# Cleanup - stop all memory hogging processes
kill $(jobs -p)
echo "Memory hog processes stopped."

