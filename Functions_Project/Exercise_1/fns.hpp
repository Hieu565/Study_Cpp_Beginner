#pragma once   // prevents multiple inclusions of the same header file
#include <iostream>
#include <iomanip>

// header
void math();

// HAVE TO CREATE EACH TEMPLATE FOR EACH FUNCTION

template <typename S>
S sum(S num1, S num2, S num3) {
  
  return num1 + num2 + num3;
  
}

template <typename M>
M min(M num1, M num2, M num3) {
  
  return (num1 < num2 ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3));
  /* 
  Explain: ?: check if statement
  Check: If num1 < num2 -> use smaller to compare to num3
  If that smaller num < num3 -> smallest, else num3
  */

}

template <typename SS>
SS sum_squares(SS num1, SS num2, SS num3) {
  
  return num1*num1 + num2*num2 + num3*num3;
  
}