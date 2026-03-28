#include <iostream>
#include <vector>
#include <string>

// class for variable
class Letter  {
public:
  int num1 = 2026;
  int num2 = 2030;
  std::string hello = "I am going to the World";
  std::vector<std::string> list = {"Hello", "and", "See You"};
};

// functions
void swap_num(int &i, int &j);

void num_refer(int const &num);

void appoint_variable(int &num1, int &num2, std::string &hello, std::vector<std::string> &List);

void hello_refer(std::string const &hello);

void message(std::vector<std::string> const &list);