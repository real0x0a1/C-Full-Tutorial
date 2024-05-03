#include <stdio.h>

int main() {
    int value;

    // Inline assembly to read the processor timestamp counter
    asm volatile("rdtsc" : "=a" (value));

    printf("Processor timestamp counter value: %d\n", value);

    return 0;
}
