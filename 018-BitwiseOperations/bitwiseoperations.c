#include <stdio.h>

int main() {
    // Bitwise AND, OR, XOR
    unsigned int a = 12; // Binary: 1100
    unsigned int b = 25; // Binary: 11001

    printf("Bitwise AND: %u\n", a & b); // Output: 8 (Binary: 1000)
    printf("Bitwise OR: %u\n", a | b);  // Output: 29 (Binary: 11101)
    printf("Bitwise XOR: %u\n", a ^ b); // Output: 21 (Binary: 10101)

    // Bitwise left shift and right shift
    unsigned int c = 8; // Binary: 1000

    printf("Left shift: %u\n", c << 1); // Output: 16 (Binary: 10000)
    printf("Right shift: %u\n", c >> 1); // Output: 4 (Binary: 100)

    return 0;
}
