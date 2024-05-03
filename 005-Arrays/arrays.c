#include <stdio.h>

int main() {
    // Array declaration and initialization
    int numbers[5] = {1, 2, 3, 4, 5};

    // Accessing array elements
    printf("First element: %d\n", numbers[0]);
    printf("Second element: %d\n", numbers[1]);

    // Modifying array elements
    numbers[2] = 10;

    // Displaying modified array
    printf("Modified array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
