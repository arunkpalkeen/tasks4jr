#!/bin/bash
# cpu_hog.sh - Simulates a high CPU load process with high priority

echo "Starting a high CPU usage process with high priority..."

# Start an infinite loop to consume CPU, with a high priority
nice -n -5 bash -c 'while true; do :; done' &

# Get the PID of the last background process
PID=$!
echo "High CPU usage process started with PID: $PID"
echo "Use 'top' or 'ps' to observe CPU usage and identify the process."

# Instructions for the junior
echo "  ________Task 3___________"
echo ""
echo""
echo "Troubleshooting task:"
echo "1. locate the process with high CPU usage."
echo "2. Note the process ID and use 'renice' to change its priority to a lower level."
echo "3. Observe the effect on CPU usage after changing the priority."

# Wait for a while to keep the CPU hog running for troubleshooting
sleep 60


