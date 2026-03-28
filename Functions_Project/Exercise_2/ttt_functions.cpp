#include <iostream>
#include <string>
#include <vector>
#include "ttt.hpp"

void greet()  {
  
  std::cout << "==========================" << "\n";
  std::cout << "Welcome to Tic Tac Toe!!!\n";
  std::cout << "==========================" << "\n";
  std::cout << "Instructions: 2 players will play in the 3x3 table. In a player's turn, he/she will enter number from 1 to 9 to mark their position for X/O at the table. Get three of your side's marks (X/O) in a row horizontally, vertically, or diagonally to win" << "\n";
  
}

void display_board(std::vector<char> board) {
  
  // board format vary based on board vector index
  std::cout << "\n";
  std::cout << "     |     |      \n";
  std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";
  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";
  std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";
  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";
  std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
  std::cout << "     |     |      \n";
  std::cout << "\n";

}

void end_game(bool win1, bool win2) {
  if(win1 == true && win2 == false) {
    std::cout << "X wins!!\n";
  }
  else if(win1 == false && win2 == true)  {
    std::cout << "O wins!!\n";
  }
  else  {
    std::cout << "Draw!!\n";
  }
}

void update_board(int game_turn, int &input, std::vector<char> &board, bool &error) {
  
  if(game_turn%2 == 0)  {
    
    std::cout << "Now is X turn. Please choose position number to fill (from 1 to 9 ONLY): ";
    std::cin >> input;

  }
  else  {

    std::cout << "Now is O turn. Please choose position number to fill (from 1 to 9 ONLY): ";
    std::cin >> input;

  }
      
  // validate input and update X
  if (std::cin.fail()) {
      
      // ensure right type to work
      std::cin.clear();
      std::cin.ignore(1000, '\n');
      // Handle the error (e.g., show a message)
      std::cout << "Error! Please choose position number to fill (from 1 to 9 ONLY).\n";
      error = true;

  }
  else  {

    if(input > 9 || input < 1)  {
    std::cout << "Error! Please choose position number to fill (from 1 to 9 ONLY).\n";
    error = true;
    }

    else  {
      
      if(board[input-1] == 'X' || board[input-1] == 'O')  {
        std::cout << "Position " << std::to_string(input) << " has already be chosen. Please choose another number.\n";
        error = true;
      }
      else  {
        if(game_turn%2 == 0)  {
          board[input-1] = 'X';
        }
        else  {
          board[input-1] = 'O';
        }
        error = false;
      }
      
    }
  }

}

void win_condition(std::vector<std::vector<int>> combination, std::vector<char> board, bool &win1, bool &win2)  {
  
  //&win1 and &win2: update to main()

  // more elegant way BUT STILL NOT THE BEST: loop through win conditioning vector ([i][r] for exact location of index for board) -> check if same -> win condition
  for(int i = 0; i < combination.size(); i++) {

    // use win_combination[i].size() -> access size of vector, not integer i

    if(board[combination[i][0]] == 'X' && board[combination[i][1]] == 'X' && board[combination[i][2]] == 'X') {
        win1 = true;
        break;  // end loop if meet condition
    }
    else if(board[combination[i][0]] == 'O' && board[combination[i][1]] == 'O' && board[combination[i][2]] == 'O') {
        win2 = true;
        break;  // end loop if meet condition
    }
    else  {
      win1 = false;
      win2 = false;
    }

  }

  /*
    Not elegant way: type hand by hand combinations in conditioning
    if((board[0] == 'X' && board[1] == 'X' && board[2] == 'X') || (board[3] == 'X' && board[4] == 'X' && board[5] == 'X') || (board[6] == 'X' && board[7] == 'X' && board[8] == 'X') || (board[0] == 'X' && board[3] == 'X' && board[6] == 'X') || (board[1] == 'X' && board[4] == 'X' && board[7] == 'X') || (board[2] == 'X' && board[5] == 'X' && board[8] == 'X') || (board[0] == 'X' && board[4] == 'X' && board[8] == 'X') || (board[2] == 'X' && board[4] == 'X' && board[6] == 'X')) {
      X_win = true;
    }
    else if((board[0] == 'O' && board[1] == 'O' && board[2] == 'O') || (board[3] == 'O' && board[4] == 'O' && board[5] == 'O') || (board[6] == 'O' && board[7] == 'O' && board[8] == 'O') || (board[0] == 'O' && board[3] == 'O' && board[6] == 'O') || (board[1] == 'O' && board[4] == 'O' && board[7] == 'O') || (board[2] == 'O' && board[5] == 'O' && board[8] == 'O') || (board[0] == 'O' && board[4] == 'O' && board[8] == 'O') || (board[2] == 'O' && board[4] == 'O' && board[6] == 'O'))  {
      O_win = true;
    }
    else  {
      X_win = false;
      O_win = false;
    }
    */

}