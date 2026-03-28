#include <iostream>
#include <string>
#include <vector>
#include "ttt.hpp"

int main() {
  
  // display board
  std::vector<char> board ={'1','2','3','4','5','6','7','8','9'};

  // start game turn
  int game_turn = 0;

  // X's postions
  int input = 0;

  // check if win or not
  bool X_win = false;
  bool O_win = false;

  // check for error to change turn
  bool error = false;

  // winning combination
  std::vector<std::vector<int>> win_combination = {{0,1,2}, {3,4,5}, {6,7,8},{0,3,6}, {1,4,7}, {2,5,8}, {0,4,8}, {2,4,6}};    // store vector IN vector

  // start
  greet();

  // game process
  while (game_turn <= 8 && X_win == false && O_win == false)  {
    
    display_board(board);
    input = 0;
    error = false;

    update_board(game_turn, input, board, error);
    win_condition(win_combination,board,X_win,O_win);
    
    if(error == false && X_win == false && O_win == false)  {
      game_turn ++;
    }

  }

  // end game condition
  end_game(X_win, O_win);

}
