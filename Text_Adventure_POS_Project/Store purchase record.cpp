/* ======================================================================
You are a robot engineer running a repair station (FixEverything shop), you help customers to fix day-to-day broken robots. Noticing an increasing customer base, you realise you need a proper POS (Point-of-sale) system to keep track of the service pricing and customer bills.

Here are some information about your shop's service
- Only be able to fix 3 types of problems:
+ Hardware (internal fan, shell, joint damage) – $50
+ Software (OS crash, navigation bug) – $40
+ Battery (battery replacement, charging issues) – $30

Note:
- Customers may request multiple services in one repair order.
- Other problems not being able to fix would be denied by the shop
- Price must mark another 7% tax

Help me design a program that connects input customer data and connect to POS system and pricing. Only test for 5 customers' input.
====================================================================== */ 

#include <iostream>
#include <string>

// code starts here
int main()  {
  
  // declare variable
  std::string name = "";
  std::string problem = "";
  double price = 0;
  double tax = 0.07;
  std::string fix = ""; //customers can choose to fix or not

  // loop for 5 customers (testing)
  for(int count = 1; count <= 5; count ++) {
    // store greeting
    std::cout << "Hello, this is FixEverything shop! What can I help you?\n";
    std::cout << "What should I call you: ";
    std::getline(std::cin, name);
    // std::getline(std::cin, variable); helps get line contains, std::cin only gets the 1 word
    std::cout << "\n";
    std::cout << "Okay, so we can only help you to fix these problems:\n";
    std::cout << "+ Hardware (internal fan, shell, joint damage) - $50\n";
    std::cout << "+ Software (OS crash, navigation bug) - $40\n";
    std::cout << "+ Battery (battery replacement, charging issue) - $30\n";
    std::cout << "Due to limited resources, we can only help you fix 1 problem at a time\n";

    // ask customer
    std::cout << "What is the problem of your robot: ";
    std::getline(std::cin, problem);
    std::cout << "\n";

    // problem validation before asking for price
    if(problem ==  "internal fan" || problem == "shell" || problem == "joint damage" || problem == "OS crash" || problem == "navigation bug" || problem == "battery replacement" || problem == "charging issues" || problem == "None") {
      // continue conditioning for problems' price
      if(problem == "None")  {
        std::cout << "Thank you for visting our store.\n";
      }
      else if(problem ==  "internal fan" || problem == "shell" || problem == "joint damage") {
        price = 50;
      }
      else if(problem == "OS crash" || problem == "navigation bug") {
        price = 40;
      }
      else if(problem == "battery replacement" || problem == "charging issues") {
        price = 30;
      }

      // Show expected pricing
      std::cout << "So the expected price would be: $";
      std::cout << std::to_string(price*(1+tax)) + "\n";  
      // needs to be std::to_string instead of just str()

      // Ask for decision
      std::cout << "Do you wish to continue to fix or not? [Y/N]\n";
      std::cin >> fix;
      std::cout << "\n";

      // condition on decision making
      if(fix == "Y" || fix == "y")  {
        std::cout << "Okay, I will fix your " + problem + " problem. It will cost you $" + std::to_string(price*(1+tax)) + "\n";
        std::cout << "I will send you your bill later\n";
        std::cout << "Thank you for trusting our service!\n";
      }
      else {
        std::cout << "Thank you for visting our store.\n";
      }
    }

    else  {
      std::cout << "I'm sorry, I cannot fix your problem. You should instead go to a merchandise to help you.\n"; // validation
    }
  }

}
