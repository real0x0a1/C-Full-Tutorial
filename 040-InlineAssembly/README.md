# README

## Introduction

This C code demonstrates how to use inline assembly in C to read the processor timestamp counter (TSC). The TSC is a 64-bit register present in most modern CPUs that increments with each CPU cycle, providing a high-resolution timestamp for performance monitoring and benchmarking purposes.

## Code Explanation

The code consists of a single C file, `main.c`, containing the following parts:

1. **Include Statements**:

   ```c
   #include <stdio.h>
   ```

   This statement includes the standard input-output library necessary for using functions like `printf()`.

2. **Main Function**:

   ```c
   int main() {
       // Function body
   }
   ```

   The `main()` function is the entry point of the program. It initializes a variable `value` of type `int` to store the timestamp counter value.

3. **Inline Assembly**:

   ```c
   asm volatile("rdtsc" : "=a" (value));
   ```

   This line contains the inline assembly code that reads the TSC value.

   - `asm`: Keyword to indicate the start of inline assembly code.
   - `volatile`: Informs the compiler that the assembly code has side effects and should not be optimized out.
   - `"rdtsc"`: Instruction to read the TSC.
   - `: "=a" (value)`: Output constraint telling the compiler to assign the value of the `eax` register (lower 32 bits of TSC) to the variable `value`.

4. **Output**:

   ```c
   printf("Processor timestamp counter value: %d\n", value);
   ```

   This line prints the value of the timestamp counter obtained from the inline assembly code.

5. **Return Statement**:
   ```c
   return 0;
   ```
   The `main()` function ends with a return statement, indicating successful execution of the program.

## How to Run

To run this program:

1. Make sure you have a C compiler installed on your computer.
2. Copy the code into a file with a `.c` extension, for example, `inlineassembly.c`.
3. Open a terminal or command prompt and navigate to the directory where your file is located.
4. Compile the program by entering: `gcc inlineassembly.c -o inlineassembly`
5. Run the compiled program: `./inlineassembly`

Or you can run this program also using:

```bash
   make inlineassembly
```

---
