#include <iostream>
#include <string>

// declare functions
void greet();   // instructions
void display_board(std::vector<char> board);    // show board
void end_game(bool win1, bool win2);   // win game
void win_condition(std::vector<std::vector<int>> combination, std::vector<char> board, bool &win1, bool &win2);  // win conditions
void update_board(int game_turn, int &input, std::vector<char> &board, bool &error);  //update board
  