#include <stdio.h>

// Function declaration
int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

// Main function
int main() {
    // Function calls
    int sum = add(5, 3);
    int result = multiply(4, 6);

    // Display results
    printf("Sum: %d\n", sum);
    printf("Result: %d\n", result);

    return 0;
}
