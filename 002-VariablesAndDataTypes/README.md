# Simple C Program: Displaying Numbers

This is a basic C program that demonstrates how to declare and display variables. Let's break down what each part of the code does:

```c
#include <stdio.h>
```

This line tells the compiler to include the standard input-output library, which provides functions like `printf` and `scanf` for input and output operations.

```c
int main() {
```

This line marks the beginning of the main function. In C, every program starts executing from the `main` function.

```c
    // Variables
    int num1 = 10;
    float num2 = 5.5;
```

Here, we declare two variables: `num1` as an integer (whole number) with a value of 10, and `num2` as a floating-point number (decimal) with a value of 5.5.

```c
    // Display variables
    printf("Number 1: %d\n", num1);
    printf("Number 2: %.2f\n", num2);
```

These lines use the `printf` function to print the values of our variables to the console. `%d` is a placeholder for an integer, and `%.2f` is a placeholder for a floating-point number with two decimal places.

```c
    return 0;
}
```

Finally, `return 0;` indicates that the program has executed successfully. In C, a `main` function typically returns an integer value, and returning 0 signifies that the program ran without errors.

## How to Run the Program:

1. Make sure you have a C compiler installed on your system.
2. Copy this code into a file, for example, `display_numbers.c`.
3. Open a terminal and navigate to the directory where the file is saved.
4. Compile the program using a command like `gcc display_numbers.c -o display_numbers`.
5. Run the compiled program with `./display_numbers`.

You should see the numbers 10 and 5.5 displayed on the console. This is a simple example to help you get started with C programming. Feel free to modify and experiment with the code! 🚀

---

Make sure to adjust the file name and compilation instructions if needed. The goal is to provide a beginner-friendly explanation along with instructions on how to run the program.
