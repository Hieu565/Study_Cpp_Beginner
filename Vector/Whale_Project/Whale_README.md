# Whale Talk Translator
This program is a C++ implementation of a "Whale Talk" generator. It takes a standard English string and translates it into whale language based on specific phonetic rules.

## How It Works
1. Whale language follows a few simple rules that are handled by the logic in Whale.cpp:
2. Vowels Only: The translator strips away all consonants, keeping only the vowels ('a', 'e', 'i', 'o', 'u').
3. Double the 'e' and 'u': In whale talk, the sounds 'e' and 'u' are extra long. The code checks for these specific characters and doubles them in the output.
4. Nested Comparisons: The program uses a nested for loop to compare every letter of the input string against a vector of valid vowels.

## Code Breakdown
- Input: The program currently translates the string "turpentine and turtles".
- Storage:
  + A vowels vector stores the characters to look for.
  + A result vector stores the translated characters before they are printed.
- Logic:
  + If a character in the input matches a vowel, it is added to the result.
  + If that character happens to be an 'e' or a 'u', it is added to the result a second time.

## Example Output
For the input "turpentine and turtles", the output will be:
```uueeieeaauee```

## How to Compile and Run
To see the whale talk in action, compile the source file using a C++ compiler like g++:

```
Bash
g++ Whale.cpp -o whale_talk
./whale_talk
```
