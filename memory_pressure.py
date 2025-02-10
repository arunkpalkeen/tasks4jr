import time

# List to hold allocated memory
memory_hog = []

print("Starting memory allocation...")

# Allocate approximately 500 MB chunks continuously
try:
    while True:
        memory_hog.append(' ' * 500 * 1024 * 1024)  # Allocate 500 MB
        print("Allocated 500 MB, current allocation:", len(memory_hog) * 500, "MB")
        time.sleep(1)  # Adjust as necessary to control allocation speed
except MemoryError:
    print("Memory allocation stopped: system memory is exhausted.")
    time.sleep(30)  # Keep the program running to observe memory usage

