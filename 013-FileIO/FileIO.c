#include <stdio.h>

int main() {
    FILE *file;
    char text[100];

    // Writing to a file
    file = fopen("example.txt", "w");
    if (file != NULL) {
        fprintf(file, "Hello, this is written to a file!");
        fclose(file);
    }

    // Reading from a file
    file = fopen("example.txt", "r");
    if (file != NULL) {
        fgets(text, sizeof(text), file);
        printf("Content of the file: %s\n", text);
        fclose(file);
    }

    return 0;
}
