#!/bin/bash
# High priority CPU-consuming process

echo "Creating a high CPU load process with high priority..."

# Start an infinite loop with high priority
nice -n -20 yes > /dev/null &
echo "Process created with high priority .  troubleshoot."
sleep 30  # Keep script running for monitoring

