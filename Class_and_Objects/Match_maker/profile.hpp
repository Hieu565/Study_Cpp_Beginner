#include <string>
#include <iostream>
#include <vector>

class Input  {
public:
  // Input variable
  std::string n_name;
  int n_age;
  std::string n_city;
  std::string n_country;
  std::string gender;
  std::string n_pronouns;
  std::string n_hobbies;
};

class Profile {

// private cannot be accessed
private:
  std::string name;
  int age;
  std::string city;
  std::string country;
  std::string pronouns;
  std::string gender;
  std::vector<std::string> hobbies;

// public can be accessed anywhere
public:
  Profile(std::string new_name,int new_age,std::string new_city,std::string new_country,std::string new_gender,std::string new_pronouns = "they/them");
  std::string view_profile();
  void add_hobby(std::string new_hobby);

};

// functions of system
void greet();
void gender_reference(std::string gender, std::string &pronouns);
void ask(std::string &name, int &age, std::string &city, std::string &country, std::string &gender, std::string &pronouns);   // use & before variable to allow update
