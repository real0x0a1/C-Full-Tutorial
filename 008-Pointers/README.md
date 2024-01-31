```c
#include <stdio.h>

int main() {
    // Pointer declaration and initialization
    int number = 42;
    int *ptr = &number;

    // Accessing variable using pointer
    printf("Value of number: %d\n", *ptr);

    // Modifying variable using pointer
    *ptr = 100;

    // Displaying modified variable
    printf("Modified value: %d\n", number);

    return 0;
}
```

**Explanation:**

1. **`#include <stdio.h>`:**
   - This line is a preprocessor directive that tells the compiler to include the standard input/output library, which provides functions like `printf`.

2. **`int main() { ... }`:**
   - This is the `main` function, where the program execution starts.

3. **Variable Declaration and Initialization:**
   - `int number = 42;`
     - Declares an integer variable named `number` and initializes it with the value `42`.

   - `int *ptr = &number;`
     - Declares a pointer variable named `ptr` that can store the memory address of an integer. It is initialized with the memory address of the `number` variable using the `&` (address-of) operator.

4. **Accessing Variable Using Pointer:**
   - `printf("Value of number: %d\n", *ptr);`
     - Prints the value stored at the memory address pointed to by `ptr`. The `*` (dereference) operator is used to access the value at that address.

5. **Modifying Variable Using Pointer:**
   - `*ptr = 100;`
     - Modifies the value stored at the memory address pointed to by `ptr`. In this case, it changes the value of the `number` variable to `100`.

6. **Displaying Modified Variable:**
   - `printf("Modified value: %d\n", number);`
     - Prints the modified value of the `number` variable.

7. **`return 0;`:**
   - Indicates that the program executed successfully. The `0` is a convention for indicating successful execution.

In summary, this program introduces the concept of pointers. A pointer is a variable that stores the memory address of another variable. In this example, the pointer `ptr` is used to access and modify the value of the `number` variable indirectly. Understanding pointers is crucial in C programming for tasks like dynamic memory allocation and efficient manipulation of data structures.

## How to Run

To run this program:

1. Make sure you have a C compiler installed on your computer.
2. Copy the code into a file with a `.c` extension, for example, `pointers.c`.
3. Open a terminal or command prompt and navigate to the directory where your file is located.
4. Compile the program by entering: `gcc pointers.c -o pointers`
5. Run the compiled program: `./pointers`

Or you can run this program also using:

```bash
   make pointers
```

---