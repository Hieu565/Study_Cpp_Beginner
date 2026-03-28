#include <iostream>
#include "profile.hpp"

int main() {

  // Greet
  greet();
  
  // Input variable
  std::string n_name;
  int n_age;
  std::string n_city;
  std::string n_country;
  std::string gender;
  std::string n_pronouns;
  std::string n_hobbies;
  
  // Ask for information
  ask(n_name,n_age,n_city,n_country);
  
  // gender input condition
  std::cout << "What is your gender (Men/Women/Other): ";
  std::cin >> gender;
  gender_reference(gender,n_pronouns);

  // Inputting information to profile (class)
  Profile sam(n_name,n_age,n_city,n_country,n_pronouns);
  
  // enter hobbies
  std::cout << "Please enter your 3 favourite hobbies:\n";
  for(int i = 0; i < 3; i++)  {
    std::cout << std::to_string(i+1) + ". ";
    std::cin >> n_hobbies;
    sam.add_hobby(n_hobbies);
  }
  
  sam.view_profile();
  std::cout << sam.view_profile() << "\n";
  

}