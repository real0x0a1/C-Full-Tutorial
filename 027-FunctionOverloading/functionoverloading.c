#include <stdio.h>

// Function with two integer parameters
int add(int a, int b) {
    return a + b;
}

// Function with three integer parameters
int addThree(int a, int b, int c) {
    return a + b + c;
}

int main() {
    printf("Sum of two numbers: %d\n", add(5, 3));
    printf("Sum of three numbers: %d\n", addThree(5, 3, 2));

    return 0;
}
