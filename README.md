# C Experiments

This repository contains basic examples of C programming concepts, intended for learning and experimentation. The examples cover fundamental features of the C language, including variable initialization, control structures, functions, arrays, pointers, strings, and memory allocation.

## File Structure

- `main.c`: The main source file containing all the examples.

## Concepts Covered

- **Variable Initialization and Assignment:** Basic variable types like `int`, `float`, `char`, and `bool`.
- **Control Structures:** `if-else` statements, `switch` statements, and different types of loops (`for`, `while`, `do-while`).
- **Arrays and Pointers:** Basic usage of arrays and pointers in C.
- **Strings:** String operations, including concatenation using `strcpy` and `strcat`.
- **Functions:** Function declaration, definition, and calling by value and by reference.
- **Memory Management:** Dynamic memory allocation using `malloc` and memory deallocation using `free`.

## How to Compile and Run

1. Clone the repository:

   ```bash
   git clone https://github.com/owenthcarey/c-experiments.git
   ```

2. Navigate to the project directory:

   ```bash
   cd c-experiments
   ```

3. Compile the `main.c` file using a C compiler like `gcc`:

   ```bash
   gcc -o c-experiments main.c
   ```

4. Run the compiled program:

   ```bash
   ./c-experiments
   ```

## Example Output

When you run the program, you should see output similar to the following:

   ```text
   Hello, World!
   a equals 1
   a is 1
   Loop: 0
   Loop: 1
   ...
   Do-While Counter: 4
   Combined String: Hello World
   In myFunction: x = 1, y = 2.00
   In myFunctionByReference: x = 1, y = 2.00
   ```
