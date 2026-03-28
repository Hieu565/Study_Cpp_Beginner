# Letter to Self: C++ Memory and Pointers
This project is a technical "letter to self" that demonstrates fundamental C++ memory management concepts. It serves as a practical guide for understanding how data is stored, referenced, and accessed through pointers and memory addresses.

## Project Structure
The project is organized into three files to separate data definitions from execution logic:

```
project/
│── letter.cpp
│── letter_func.cpp
│── letter.hpp
│── README.md
```

## File Structure

- ```letter.cpp```: The main entry point that initializes the Letter class and executes the sequence of memory operations.
- ```letter.hpp```: The header file containing the Letter class definition and function prototypes for the memory tools.
- ```letter_func.cpp```: The implementation file where the specific logic for swapping, referencing, and pointing to data is defined.

## Key Technical Concepts
This project focuses on the "under the hood" mechanics of C++:

- **Classes and objects**: The Letter class encapsulates various data types, including integers, strings, and vectors, providing a central object to manipulate.
- **Pass-by-reference**: The swap_num function uses references (&) to swap two values directly in memory without creating temporary copies.
- **Pointers and nullptrs**: Several functions demonstrate how to use pointers (*) to hold memory addresses and how to initialize them safely with nullptr.
- **Dereferencing**: The code shows how to access the actual value stored at a specific memory address using the * operator (dereferencing).
- **Const correctness**: Functions like num_refer and message use const to ensure that data can be read and pointed to without being accidentally modified.

## How it Works
When the program runs, it performs the following steps:

1. **Swapping**: It swaps the values of num1 (2026) and num2 (2030) using a reference-based swap function.
2. **Memory inspection**: It prints the raw hexadecimal memory addresses of the variables alongside their actual values.
3. **Vector access via pointers**: It uses a pointer to a vector to iterate through and print a list of strings.

## Compilation and Execution
To compile and run this memory demonstration, use the following commands in your terminal:

```
Bash
g++ letter.cpp letter_func.cpp -o letter_to_self
./letter_to_self
```
