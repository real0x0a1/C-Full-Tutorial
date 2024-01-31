```c
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
```

**Explanation:**

1. **`#include <stdio.h>`:**
   - This line is a preprocessor directive, telling the compiler to include the standard input/output library (`stdio.h`), which provides functions like `printf`.

2. **`int main() { ... }`:**
   - This is the main function where the program execution starts. The `{` and `}` curly braces define the start and end of the `main` function.

### While Loop:

```c
// While loop
int counter = 0;
while (counter < 5) {
    printf("Counter: %d\n", counter);
    counter++;
}
```

- `counter` is initialized to 0.
- The `while` loop checks if `counter` is less than 5.
- Inside the loop:
  - It prints the current value of `counter`.
  - Increments `counter` by 1.
- The loop continues until `counter` is no longer less than 5.

### For Loop:

```c
// For loop
for (int i = 0; i < 5; i++) {
    printf("Index: %d\n", i);
}
```

- The `for` loop has three parts: initialization (`int i = 0`), condition (`i < 5`), and increment (`i++`).
- Inside the loop:
  - It prints the current value of `i`.
- The loop runs as long as the condition (`i < 5`) is true.

### Do-While Loop:

```c
// Do-while loop
int x = 5;
do {
    printf("Value of x: %d\n", x);
    x--;
} while (x > 0);
```

- `x` is initialized to 5.
- The `do-while` loop executes the block of code first and then checks the condition (`x > 0`).
- Inside the loop:
  - It prints the current value of `x`.
  - Decrements `x` by 1.
- The loop continues until the condition (`x > 0`) is false.

### `return 0;`:

- Indicates that the program executed successfully. The `0` here is a convention for indicating a successful execution.

These loops are fundamental for controlling the flow of your program. The `while` loop continues as long as the specified condition is true, the `for` loop repeats a block of code a specified number of times, and the `do-while` loop ensures that the code is executed at least once before checking the condition.

## How to Run

To run this program:

1. Make sure you have a C compiler installed on your computer.
2. Copy the code into a file with a `.c` extension, for example, `loop.c`.
3. Open a terminal or command prompt and navigate to the directory where your file is located.
4. Compile the program by entering: `gcc loop.c -o loop`
5. Run the compiled program: `./loop`

Or you can run this program also using:

```bash
   make loop
```

---