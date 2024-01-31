#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    // User input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate and display factorial
    printf("Factorial of %d: %d\n", num, factorial(num));

    return 0;
}
