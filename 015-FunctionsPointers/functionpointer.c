#include <stdio.h>

// Function pointer type
typedef int (*Operation)(int, int);

// Function declarations
int add(int a, int b);
int subtract(int a, int b);

int main() {
    // Function pointers
    Operation operationPtr;

    // Assigning function addresses to pointers
    operationPtr = add;
    printf("Result of addition: %d\n", operationPtr(5, 3));

    operationPtr = subtract;
    printf("Result of subtraction: %d\n", operationPtr(5, 3));

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}
