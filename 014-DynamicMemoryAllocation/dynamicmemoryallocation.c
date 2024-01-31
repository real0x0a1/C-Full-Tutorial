#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size;

    // User input for array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Dynamic memory allocation for an integer array
    arr = (int *)malloc(size * sizeof(int));

    // User input for array elements
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display array elements
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Free allocated memory
    free(arr);

    return 0;
}
