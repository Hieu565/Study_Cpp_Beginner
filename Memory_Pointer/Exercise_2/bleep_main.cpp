#include <iostream>
#include <string>
#include "functions.hpp"

int main()  {

  // create object for class Letter
  Letter letter;

  // simple version: find each character, compare, then update result
  bleep(letter.word, letter.text);
  std::cout << letter.text << "\n";

}
