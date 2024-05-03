# README

## Introduction

This C code illustrates the usage of macros for debug printing in C programs. Debug printing is a common technique used during software development to print debug messages for troubleshooting and understanding program execution flow.

## Code Explanation

The code consists of a single C file, `main.c`, with the following components:

1. **Include Statements**:

   ```c
   #include <stdio.h>
   ```

   This statement includes the standard input-output library required for functions like `printf()`.

2. **Debug Macro Definition**:

   ```c
   #ifdef DEBUG
   #define debugPrint(msg) printf("Debug: %s\n", msg)
   #else
   #define debugPrint(msg)
   #endif
   ```

   - This code segment defines a macro `debugPrint(msg)` that takes a message as input and prints it only when the `DEBUG` macro is defined.
   - When `DEBUG` is defined, the macro expands to a `printf()` statement that prints the debug message preceded by "Debug:". Otherwise, the macro expands to nothing, effectively removing debug print statements from the compiled code.

3. **Main Function**:

   ```c
   int main() {
       // Function body
   }
   ```

   The `main()` function is the entry point of the program.

4. **Debug Printing**:

   ```c
   debugPrint("This is a debug message");
   ```

   This line demonstrates the usage of the `debugPrint()` macro. In this case, it prints the debug message "This is a debug message" if the `DEBUG` macro is defined.

5. **Return Statement**:
   ```c
   return 0;
   ```
   The `main()` function ends with a return statement, indicating successful execution of the program.

## How to Run

To run this program:

1. Make sure you have a C compiler installed on your computer.
2. Copy the code into a file with a `.c` extension, for example, `selectivecompilationwithmacros.c`.
3. Open a terminal or command prompt and navigate to the directory where your file is located.
4. Compile the program by entering: `gcc selectivecompilationwithmacros.c -o selectivecompilationwithmacros`
5. Run the compiled program: `./selectivecompilationwithmacros`

Or you can run this program also using:

```bash
   make selectivecompilationwithmacros
```

## Enabling Debug Mode

To enable debug printing, define the `DEBUG` macro during compilation. For example:

```bash
gcc -o debug_example -DDEBUG main.c
```

This will include the debug print statements in the compiled code.

## Output

When debug mode is enabled, the program will print debug messages. Otherwise, no debug messages will be printed.

---
