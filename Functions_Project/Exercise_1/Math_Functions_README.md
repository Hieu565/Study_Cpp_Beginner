# Simple Math Functions in C++

## Overview

This project is a simple C++ program that:
- Takes three numbers (x, y, z) from user input
- Performs basic mathematical operations
- Displays formatted results

It demonstrates:
- Splitting code into multiple files (```.cpp``` and ```.hpp```)
- Function usage and modular design
- Basic input/output handling

## Project Structure

```
project/
│── main.cpp
│── fns.cpp
│── fns.hpp
│── README.md
```

## File roles

- ```main.cpp```: Entry point of the program. Calls ```math()```.
- ```fns.hpp```: Contains function declarations. Acts as the interface.
- ```fns.cpp```: Contains implementations and program logic.

## File Linking Explanation

The project uses ```#include``` to connect files: ```#include "fns.hpp"```

How it works:
1. ```main.cpp``` includes ```fns.hpp```
2. ```fns.hpp``` declares functions
3. ```fns.cpp``` defines those functions
4. The compiler links everything during compilation

## How to compile

```g++ main.cpp fns.cpp -o app```

## How to run

```./app```

## Functions

```math()```: 
- Gets input from user
- Calls other functions
- Prints results

```sum(x, y, z)```: Returns the sum of 3 numbers

```min(x, y, z)```: Returns the smallest number

```sum_squares(x, y, z)```: Returns ```x² + y² + z²```

## Example

```
Let x = 2
Let y = 3
Let z = 4

Total of 3 number is 9.00
The smallest number is 2.00
Sum of each number squared is 29.00
```

## Notes

Make sure to include this in ```fns.cpp```:

```#include <iomanip>```

