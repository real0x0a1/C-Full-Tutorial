```c
#include <stdio.h>

int main() {
    int num;  // Declare a variable to store an integer

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);  // Read the user's input and store it in the 'num' variable

    // Conditional statement (if-else)
    if (num > 0) {  // Check if the entered number is greater than 0
        printf("Positive number\n");  // If true, print "Positive number"
    } else if (num < 0) {  // If the first condition is false, check if the number is less than 0
        printf("Negative number\n");  // If true, print "Negative number"
    } else {
        printf("Zero\n");  // If both conditions are false, print "Zero"
    }

    return 0;  // Indicate that the program has executed successfully
}
```

Explanation:

1. **Include Header File:** `#include <stdio.h>` - This line tells the compiler to include the standard input/output library, allowing the use of functions like `printf` and `scanf`.

2. **Declare Variable:** `int num;` - This line declares a variable named `num` to store an integer (whole number).

3. **User Input:** 
   ```c
   printf("Enter a number: ");
   scanf("%d", &num);
   ```
   - `printf` is used to display a message asking the user to enter a number.
   - `scanf` is used to read the user's input and store it in the variable `num`. The `%d` in `scanf` is a format specifier indicating that the input should be an integer.
   - `&num` is the memory address of the variable `num`, required by `scanf` to store the input value.

4. **Conditional Statement (if-else):**
   ```c
   if (num > 0) {
       printf("Positive number\n");
   } else if (num < 0) {
       printf("Negative number\n");
   } else {
       printf("Zero\n");
   }
   ```
   - This block of code checks the value of the variable `num`.
   - If `num` is greater than 0, it prints "Positive number."
   - If `num` is less than 0, it prints "Negative number."
   - If neither condition is met (i.e., `num` is 0), it prints "Zero."

5. **Return Statement:** `return 0;` - This line signals that the program executed successfully and returns 0 to the operating system.

In summary, this program takes user input, checks if the entered number is positive, negative, or zero, and then prints an appropriate message. It serves as a simple introduction to user input, variables, and basic conditional statements in C programming.

## How to Run

To run this program:

1. Make sure you have a C compiler installed on your computer.
2. Copy the code into a file with a `.c` extension, for example, `conditional.c`.
3. Open a terminal or command prompt and navigate to the directory where your file is located.
4. Compile the program by entering: `gcc conditional.c -o conditional`
5. Run the compiled program: `./conditional`

Or you can run this program also using:

```bash
   make conditional
```

---