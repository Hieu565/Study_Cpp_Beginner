#include <iostream>
#include <vector>
#include <string>
#include "letter.hpp"

int main() 
{
  
  std::cout << "Dear Self,\n";

  // call Letter class
  Letter myLetter;

  // Now we can call variable myLetter.variable to refer to that variable in functions

  // reference (allow change or refer)
  swap_num(myLetter.num1,myLetter.num2);

  // memory access and pointers
  num_refer(myLetter.num2);

  // deference of memory
  hello_refer(myLetter.hello);

  // message
  message(myLetter.list);
  std::cout << myLetter.num1;
  
}