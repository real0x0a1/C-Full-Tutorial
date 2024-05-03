#include <stdio.h>

int main() {
    // While loop
    int counter = 0;
    while (counter < 5) {
        printf("Counter: %d\n", counter);
        counter++;
    }

    // For loop
    for (int i = 0; i < 5; i++) {
        printf("Index: %d\n", i);
    }

    // Do-while loop
    int x = 5;
    do {
        printf("Value of x: %d\n", x);
        x--;
    } while (x > 0);

    return 0;
}
