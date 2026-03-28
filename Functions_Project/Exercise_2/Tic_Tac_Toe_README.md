# Tic-Tac-Toe in C++
This project is a functional, text-based Tic-Tac-Toe game designed for two players to compete on a 3x3 grid using the command line.

## File Structure
The project is organized into three distinct files to demonstrate modular programming and clean code separation:

- ```ttt.cpp```: This is the main driver of the program. It initializes the game board, sets up the winning combinations, and runs the central game loop that alternates between players.
- ```ttt.hpp```: The header file that serves as a bridge between the logic and the main execution. It contains the function declarations for greeting players, displaying the board, and checking win conditions.
- ```ttt_functions.cpp```: This file contains the actual definitions (the "how-to") for all functions declared in the header. It handles the input logic, board updates, and the mathematics of checking for a winner.

## How to Play
1. The Grid: The board consists of 9 positions numbered 1 through 9.
2. Taking Turns: Player X starts the game, followed by Player O.
3. Making a Move: When it is your turn, enter a number from 1 to 9 to place your mark in that specific spot.
4. Winning: To win, a player must align three of their marks (X or O) horizontally, vertically, or diagonally.
5. Game End: The game ends immediately when a player wins or after 9 turns result in a draw.

## Key Components

- Winning Logic: The game uses a 2D vector called win_combination to store all 8 possible ways to win, making the check process efficient and scalable.
- Error Handling: The program includes a validation system to ensure players do not enter letters, numbers outside the 1-9 range, or attempt to choose a position that is already occupied.
- Reference Passing: Functions like update_board and win_condition use C++ references (the & symbol) to modify variables like the game board and win status directly in the main loop.

## Compilation and Execution
To run the game, you must compile both source files together. Use the following commands in your terminal:

```
Bash
g++ ttt.cpp ttt_functions.cpp -o tictactoe
./tictactoe
```
