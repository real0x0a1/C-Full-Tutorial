#include <stdio.h>

int main() {
    FILE *file;

    // Error handling with fopen
    file = fopen("nonexistent_file.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Perform operations with the file

    fclose(file);

    return 0;
}
