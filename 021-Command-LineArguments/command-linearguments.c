#include <stdio.h>

int main(int argc, char *argv[]) {
    // Check if command-line arguments are provided
    if (argc < 2) {
        printf("Usage: %s <name>\n", argv[0]);
        return 1; // Exit with an error code
    }

    // Display the provided command-line argument
    printf("Hello, %s!\n", argv[1]);

    return 0;
}
