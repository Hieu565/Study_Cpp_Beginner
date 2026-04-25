#include "profile.hpp"
#include <iostream>

// define constructor on profile to access variable on private class
Profile::Profile(std::string new_name,int new_age,std::string new_city,std::string new_country,std::string new_gender,std::string new_pronouns) {
  
  name = new_name;
  age = new_age;
  city = new_city;
  country = new_country;
  pronouns = new_pronouns;
  gender = new_gender;

}

// view profile
std::string Profile::view_profile() {
  
  // need a return variable to show values
  std::string view = "Name: " + name;
  view += "\nAge: " + std::to_string(age);
  view += "\nCity: " + city;
  view += "\nCountry: " + country;
  view += "\nPronouns: " + pronouns;

  // display hobbies
  std::string hobby_string = "Hobbies:\n";
  for(int i = 0; i < hobbies.size(); i++) {
    hobby_string += " - " + hobbies[i] + "\n";
  }

  return view + "\n" + hobby_string;

}

// add hobby class
void Profile::add_hobby(std::string new_hobby) {
  hobbies.push_back(new_hobby);
}

// greet
void greet()  {
  std::cout << "Welcome to The Object Of Your Affection (OOYA).\n";
  std::cout << "Please enter the following information to proceed. \n";
}

// ask for general input
void ask(std::string &name, int &age, std::string &city, std::string &country, std::string &gender, std::string &pronouns)  {
  std::cout << "Please enter your name: ";
  std::cin >> name;
  std::cout << "Please enter your age: ";
  std::cin >> age;
  std::cout << "Which city do you come from: ";
  std::cin >> city;
  std::cout << "Which country do you come from: ";
  std::cin >> country;
  // gender input condition
  std::cout << "What is your gender (Men/Women/Other): ";
  std::cin >> gender;
  gender_reference(gender,pronouns);
}

// gender input handling
void gender_reference(std::string gender,std::string &pronouns)  {
  while(gender != "Men" && gender != "Women" && gender != "Other")  {
    
    std::cout << "You can only select (Men/Women/Other). Please select again: ";
    std::cin >> gender;

  }

  if(gender == "Men") {
    pronouns = "he/him";
  }
  else if(gender == "Women")  {
    pronouns = "she/her";
  }
  else  {
    pronouns = "User";
  }
}
