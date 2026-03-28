#include <iostream>
#include <vector>
#include <string>
#include "letter.hpp"

void swap_num(int &i, int &j) {

  int temp = i;
  i = j;
  j = temp;

}

void num_refer(int const &num) {
  // test with null pointer
  const int* ptr = nullptr;  // match type with function parameter
  ptr = &num;
  std::cout << ptr;
  std::cout << "\n";
  std::cout << *ptr;
  std::cout << "\n";
}

void hello_refer(std::string const &hello) {
  // test with null pointer
  const std::string* ptr1 = nullptr;  // match type with function parameter
  ptr1 = &hello;
  std::cout << ptr1;
  std::cout << "\n";
  std::cout << *ptr1;
  std::cout << "\n";
}

void message(std::vector<std::string> const &list)  {
  // need 2 consts before typename and variable to ensure clarity for pointer *
  const std::vector<std::string>* const L = &list;
  // Loop to print vector
  for (const std::string& item : *L)  {
    std::cout << item << " ";
  }
}