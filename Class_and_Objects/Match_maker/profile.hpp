#include <string>
#include <iostream>
#include <vector>

class Profile {

// private cannot be accessed
private:
  std::string name;
  int age;
  std::string city;
  std::string country;
  std::string pronouns;
  std::vector<std::string> hobbies;

// public can be accessed anywhere
public:
  Profile(std::string new_name,int new_age,std::string new_city,std::string new_country,std::string new_pronouns = "they/them");
  std::string view_profile();
  void add_hobby(std::string new_hobby);

};

// functions of system
void greet();
void gender_reference(std::string gender,std::string pronouns);
void ask(std::string &name, int &age, std::string &city, std::string &country);   // use & before variable to allow update