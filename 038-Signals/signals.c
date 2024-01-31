#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

// Signal handler function
void handleSignal(int signal) {
    printf("Received signal %d\n", signal);
}

int main() {
    // Register the signal handler
    signal(SIGINT, handleSignal);

    printf("Waiting for a signal (Press Ctrl+C)...\n");

    while (1) {
        // Keep the program running
    }

    return 0;
}
