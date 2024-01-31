#include <stdio.h>

// Define a structure for a mathematical operation
struct MathOperation {
    int (*operation)(int, int);
    char symbol;
};

// Function declarations
int add(int a, int b);
int subtract(int a, int b);

int main() {
    // Create instances of MathOperation structure
    struct MathOperation addOp = {add, '+'};
    struct MathOperation subtractOp = {subtract, '-'};

    // Use function pointers within structures
    printf("Result of %d %c %d: %d\n", 5, addOp.symbol, 3, addOp.operation(5, 3));
    printf("Result of %d %c %d: %d\n", 5, subtractOp.symbol, 3, subtractOp.operation(5, 3));

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}
