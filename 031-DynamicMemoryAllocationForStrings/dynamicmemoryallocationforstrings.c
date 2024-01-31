#include <stdio.h>
#include <stdlib.h>

int main() {
    char *name;

    // Allocate memory for a string
    name = (char *)malloc(50 * sizeof(char));
    if (name == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Input a string
    printf("Enter your name: ");
    scanf("%s", name);

    // Display the string
    printf("Hello, %s!\n", name);

    // Free allocated memory
    free(name);

    return 0;
}
