#include <stdio.h>
#include <string.h>

int main() {
    char greeting[20] = "Hello, ";
    char name[10];

    printf("Enter your name: ");
    scanf("%s", name);

    // Concatenate strings
    strcat(greeting, name);

    // Display concatenated string
    printf("%s\n", greeting);

    // String length
    printf("Length of the string: %lu\n", strlen(greeting));

    return 0;
}
