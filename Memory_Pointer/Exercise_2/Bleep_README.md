# **Bleep: String Censor in C++
This project is a functional string manipulation program designed to identify a specific target word within a body of text and "bleep" it out by replacing its characters with asterisks.

## Project Structure
```
project/
│── bleep_main.cpp
│── functions.cpp
│── functions.hpp
│── README.md
```

## File Structure
The project is organized into three distinct files to demonstrate modular programming, object-oriented concepts, and clean code separation:

- ```bleep_main.cpp```: The main driver of the program. It initializes an instance of the Letter class, calls the bleeping logic, and outputs the final censored result to the console.
- ```functions.hpp```: The header file containing the Letter class definition and function prototypes. It defines the target ```word``` ("broccoli") and the source text to be processed.
- ```functions.cpp```: This file contains the implementation of the core logic. It includes the nested loops required to scan for string matches and the update function that performs the character replacement.

## How It Works

- **The Target**: The program is currently configured to look for the ```word``` "broccoli".
- **Scanning**: The bleep function iterates through the text, comparing substrings against the target word.
- **Matching**: It uses a counter-based system to ensure every character of the target word matches the sequence in the text exactly.
- **Censoring**: Once a match is confirmed, the update function is triggered to replace the specific range of characters with ```*```.
- **Output**: The modified text is printed to the terminal, showing the original message with all instances of the target word hidden.

## Key Components
- **Pass-by-Reference**: The bleep and update functions use C++ references (std::string &text) to modify the original text directly, avoiding expensive memory copies.
- **Nested Logic**: The algorithm demonstrates a manual implementation of string searching, using nested for loops to verify matches without relying on high-level library functions like std::string::find.
- **Modular Class Design**: By storing the data within a Letter class, the project keeps the data and the logic organized and easily accessible.

## Compilation and Execution
To run the program, you must compile both source files together. Use the following commands in your terminal:

```
Bash
g++ bleep_main.cpp functions.cpp -o bleep
./bleep
```

## Example
Original Text:
```
"I eat broccoli, broccoli tastes good. There are three interesting things about broccoli..."
```
Program Output:
```
Plaintext
I eat ********, ******** tastes good. There are three interesting things about *******
```

## Notes
Compiling ```Bleep_letter.cpp``` also gives the same result as compiling ```bleep_main.cpp```, ```functions.hpp``` and ```functions.cpp```, but the code is more complex and harder to scale for modifying multiple strings.
