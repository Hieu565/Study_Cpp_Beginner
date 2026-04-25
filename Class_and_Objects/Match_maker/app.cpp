#include <iostream>
#include "profile.hpp"

int main() {

  // Greet
  greet();
  
  // Input object call
  Input in;
  
  // Ask for information (call method ask() using object Input)
  ask(in.n_name,in.n_age,in.n_city,in.n_country,in.gender,in.n_pronouns);

  // Inputting information to profile (class)
  Profile sam(in.n_name,in.n_age,in.n_city,in.n_country,in.gender,in.n_pronouns);
  
  // After all previous std::cin input calls
  std::cin.ignore(); // avoid automatically inputting 1 line before ask

  // enter hobbies
  std::cout << "Please enter your 3 favourite hobbies:\n";
  for(int i = 0; i < 3; i++)  {
    std::cout << std::to_string(i+1) + ". ";
    std::getline(std::cin, in.n_hobbies);
    sam.add_hobby(in.n_hobbies);
  }
  
  sam.view_profile();
  std::cout << sam.view_profile() << "\n";
  

}
