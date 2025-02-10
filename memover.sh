#!/bin/bash
# Memory leak simulation

echo "Simulating a memory leak..."

# Allocate memory repeatedly
while true; do
    temp=$(head -c 100M </dev/zero | tr '\0' '\040')
    sleep 2
done
