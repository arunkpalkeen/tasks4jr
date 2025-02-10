#!/bin/bash

# Simulate high CPU usage
echo "Simulating high CPU usage..."
for i in {1..4}; do
    yes > /dev/null &
done

# Simulate high memory usage
echo "Simulating high memory usage..."
stress_memory() {
    # Allocate a large amount of memory by creating a 1GB string
    while true; do
        temp=$(head -c 1G </dev/zero | tr '\0' '\040')
        sleep 2
    done
}

# Run the memory stress function in the background
stress_memory &

# Wait for 60 seconds before stopping the script (or until the user stops it)
echo "CPU and memory load are now running for 60 seconds. Use this time to troubleshoot."
sleep 60

# Kill all background processes created by this script
kill $(jobs -p)

echo "CPU and memory load simulation complete."

