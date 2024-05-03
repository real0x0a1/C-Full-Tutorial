#include <stdio.h>

// Macro definition
#define PI 3.14159

int main() {
    // Using a macro
    double radius = 5.0;
    double area = PI * radius * radius;

    printf("Area of the circle: %.2f\n", area);

    // Conditional compilation using #ifdef
#ifdef DEBUG
    printf("Debugging information...\n");
#endif

    return 0;
}
