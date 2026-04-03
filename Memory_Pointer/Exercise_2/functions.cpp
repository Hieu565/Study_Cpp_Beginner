#include <iostream>
#include <string>
#include "functions.hpp"

// function update() must be on the top to allow bleep() function use update() with in it
void update(std::string word, std::string &text, int a)  {

  for (int k = 0; k < word.size(); k++) {

    text[a+k] = '*';  // update based on location

  }

}

void bleep(std::string word,std::string &text)  {
  
  int match = 0; 
  for(int r = 0; r < text.size(); r++)  {
    // take match count
    match = 0;
    for(int i = 0; i < word.size(); i++)  {
      
      // i -> i+1 -> ...: go from first letter to next letter compare in text
      if(word[i] == text[r+i])  {
        match++;
      }

    }

    // match must equal word size to allow replace
    if(match == word.size())  {
      update(word, text, r);    // update based on broccoli word, text and starts at index r of text
    }

  }
  
}

