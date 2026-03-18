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

```project/
│── main.cpp
│── fns.cpp
│── fns.hpp
│── README.md```

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
