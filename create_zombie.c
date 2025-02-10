#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork(); // Fork a child process

    if (pid > 0) {
        // Parent process: do not wait for the child to finish
        printf("Parent process created a child process that will become a zombie.\n", getpid(), pid);
        sleep(30); // Keep the parent alive to observe the zombie state
    } else if (pid == 0) {
        // Child process: exit immediately
        printf("Child process  exiting to become a zombie.\n", getpid());
        exit(0);
    } else {
        perror("Fork failed");
        return 1;
    }

    return 0;
}

