#include <iostream>
#include <string>
#include <vector>

int main()  {

  // Whale, whale, whale.
  // What have we got here?

  std::string input = "turpentine and turtles";
  
  std::vector<char> vowels;
  vowels.push_back('a');
  vowels.push_back('e');
  vowels.push_back('i');
  vowels.push_back('o');
  vowels.push_back('u');

  std::vector<char> result;

  // nested loop to compare each letter in 2 vectors
  for(int i=0; i<input.size(); i++) {
    for(int j=0; j<vowels.size(); j++)  {

      //conditioning
      if(input[i]==vowels[j]) {
        result.push_back(input[i]);
      }

    }

    if (input[i] == 'u' || input[i] == 'e') {
        result.push_back(input[i]);     
    }
  }

  // print
  for (int k = 0; k < result.size(); k++) {   
    std::cout << result[k];
  }

  std::cout << "\n";

}
