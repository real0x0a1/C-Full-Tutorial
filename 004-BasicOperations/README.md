```c
#include <stdio.h>

int main() {
    // Variables
    int num1, num2, sum, diff, product;
    float quotient;

    // User input
    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    // Perform operations
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    quotient = (float)num1 / num2;

    // Display results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);

    return 0;
}
```

**Explanation:**

1. **`#include <stdio.h>`:**
   - This line is a preprocessor directive that tells the compiler to include the standard input/output library, which provides functions like `printf` and `scanf` for reading and writing to the console.

2. **`int main() { ... }`:**
   - Every C program starts execution from the `main` function. The `{` and `}` curly braces define the start and end of the `main` function.

3. **Variables:**
   - `int num1, num2, sum, diff, product;`
     - These are variables. Think of them as containers that can store different types of information (in this case, integers).

   - `float quotient;`
     - This is a variable that can store floating-point numbers (numbers with a decimal point).

4. **User Input:**
   - `printf("Enter number 1: ");`
     - Displays a message asking the user to enter a value for `num1`.

   - `scanf("%d", &num1);`
     - Takes the user's input (an integer) and stores it in the variable `num1`.

   - Similar steps are repeated for `num2`.

5. **Performing Operations:**
   - `sum = num1 + num2;`
     - Calculates the sum of `num1` and `num2` and stores it in the variable `sum`.

   - `diff = num1 - num2;`
     - Calculates the difference between `num1` and `num2` and stores it in the variable `diff`.

   - `product = num1 * num2;`
     - Calculates the product of `num1` and `num2` and stores it in the variable `product`.

   - `quotient = (float)num1 / num2;`
     - Calculates the quotient of `num1` divided by `num2` and stores it in the variable `quotient`. The `(float)` part ensures that the division result is treated as a floating-point number.

6. **Displaying Results:**
   - `printf("Sum: %d\n", sum);`
     - Displays the sum.

   - Similar steps are repeated for the difference, product, and quotient.

7. **`return 0;`:**
   - Indicates that the program executed successfully. The `0` here is a convention for indicating a successful execution.

This program essentially takes two numbers from the user, performs basic arithmetic operations on them, and then displays the results on the console.

## How to Run

To run this program:

1. Make sure you have a C compiler installed on your computer.
2. Copy the code into a file with a `.c` extension, for example, `basicoperations.c`.
3. Open a terminal or command prompt and navigate to the directory where your file is located.
4. Compile the program by entering: `gcc basicoperations.c -o basicoperations`
5. Run the compiled program: `./basicoperations`

Or you can run this program also using:

```bash
   make basicoperations
```

---