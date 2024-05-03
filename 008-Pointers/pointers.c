#include <stdio.h>

int main() {
    // Pointer declaration and initialization
    int number = 42;
    int *ptr = &number;

    // Accessing variable using pointer
    printf("Value of number: %d\n", *ptr);

    // Modifying variable using pointer
    *ptr = 100;

    // Displaying modified variable
    printf("Modified value: %d\n", number);

    return 0;
}
