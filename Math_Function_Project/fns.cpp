#include <iostream>
#include "fns.hpp"
#include <string>

void math()  {

  // variable declarations
  double x = 0;
  double y = 0;
  double z = 0;

  // ask for numbers
  std::cout << "Let x = ";
  std::cin >> x;
  std::cout << "Let y = ";
  std::cin >> y;
  std::cout << "Let z = ";
  std::cin >> z;

  // sum of all num
  double total =  sum(x,y,z);
  std::cout << "Total of 3 number is ";
  std::cout << std::fixed << std::setprecision(2);  // set to 2 d.p format
  std::cout << total;
  std::cout << "\n";

  // min of all num
  double least_number = min(x,y,z);
  std::cout << std::fixed << std::setprecision(2);
  std::cout << "The smallest number is ";
  std::cout << std::fixed << std::setprecision(2);  // set to 2 d.p format
  std::cout << least_number;
  std::cout << "\n";

  // sum of squares of all num
  double sum_of_squares =  sum_squares(x,y,z);
  std::cout << std::fixed << std::setprecision(2);
  std::cout << "Sum of each number squarred is ";
  std::cout << std::fixed << std::setprecision(2);  // set to 2 d.p format
  std::cout << sum_of_squares;
  std::cout << "\n";

}
