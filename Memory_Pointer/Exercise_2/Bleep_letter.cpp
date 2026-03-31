#include <iostream>
#include <string>

int main()  {

  // declare variable
  std::string word = "broccoli";
  std::string text = "I eat broccoli, broccoli tastes good. There are three interesting things about broccoli. Number One. Nobody knows how to spell it. Number Two. No matter how long you boil it, it's always cold by the time it reaches your plate. Number Three. It's green";
  std::string new_text = "********";

  // simple version: find each character, compare, then update result
  for (int i = 0; i < (text.size()-7); i++)  {
    
    if(text[i] == 'b' && text[i+1] == 'r' && text[i+2] == 'o' && text[i+3] == 'c' && text[i+4] == 'c' && text[i+5] == 'o' && text[i+6] == 'l' && text[i+7] == 'i')  {
      // text.substr(a,b) to cut text from text[a] to text[b]
      text = text.substr(0,i) + new_text + text.substr((i+8),text.size());
    }
  }

  std::cout << text << "\n";

}
