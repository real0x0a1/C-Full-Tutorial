```c
#include <stdio.h>

int main() {
    // Array declaration and initialization
    int numbers[5] = {1, 2, 3, 4, 5};
```

- **Explanation:**  
  - This program begins by including the standard input/output library (`#include <stdio.h>`). This library is necessary for functions like `printf` and `scanf` which are used to display information on the screen and take input from the user.

  - The `main()` function is the starting point of every C program. In this program, it's used to declare and initialize an array named `numbers` that can hold 5 integers.

```c
    // Accessing array elements
    printf("First element: %d\n", numbers[0]);
    printf("Second element: %d\n", numbers[1]);
```

- **Explanation:**  
  - Here, it prints the values of the first and second elements of the array using `printf`. In C, array indices start from 0, so `numbers[0]` refers to the first element, and `numbers[1]` refers to the second element.

```c
    // Modifying array elements
    numbers[2] = 10;
```

- **Explanation:**  
  - The program modifies the third element of the array (`numbers[2]`) and sets it to the value `10`.

```c
    // Displaying modified array
    printf("Modified array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
```

- **Explanation:**  
  - This part uses a `for` loop to iterate through each element of the array and prints its value. The loop runs from `i=0` to `i<5` (arrays in C are zero-indexed), and `printf("%d ", numbers[i]);` prints each element followed by a space.

```c
    return 0;
}
```

- **Explanation:**  
  - Finally, the `return 0;` statement indicates that the program has executed successfully. The `0` is a conventional way to indicate success in C programming.

In summary, this program introduces the concept of arrays, shows how to access and modify array elements, and demonstrates using a loop to iterate through array elements. It's a fundamental building block for more complex programs.

## How to Run

To run this program:

1. Make sure you have a C compiler installed on your computer.
2. Copy the code into a file with a `.c` extension, for example, `arrays.c`.
3. Open a terminal or command prompt and navigate to the directory where your file is located.
4. Compile the program by entering: `gcc arrays.c -o arrays`
5. Run the compiled program: `./arrays`

Or you can run this program also using:

```bash
   make arrays
```

---