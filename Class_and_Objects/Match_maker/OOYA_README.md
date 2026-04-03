# **OOYA: The Object Of Your Affection
This project is a C++ profile creator called "The Object Of Your Affection" (OOYA). It demonstrates the use of Object-Oriented Programming (OOP) to build a structured dating or social networking profile system.

## Project Architecture
The program is split into three files to maintain a professional development workflow:

- ```app.cpp```: The main entry point that manages the user interaction flow, including greeting the user, collecting input, and instantiating the profile object.
- ```profile.hpp```: The header file that defines the Profile class structure, including private member variables for personal data and public methods for interaction.
- ```profile.cpp```: The implementation file where the class methods (like the constructor and profile viewer) and helper functions are defined.

## Features
- **Custom class structure**: Uses a Profile class with private data members (name, age, city, country, pronouns, and hobbies) to ensure data encapsulation.
- **Dynamic hobby list**: Allows users to input exactly three favorite hobbies, which are stored in a std::vector within the object.
- **Automated pronoun assignment**: Includes a gender_reference function that automatically assigns pronouns based on the user's selected gender (Men, Women, or Other).
- **Input Validation**: A while loop ensures the user selects from the allowed gender categories before proceeding.

## Key Technical Concepts
- **Constructors**: The Profile class uses a constructor to initialize user data at the moment the object is created.
- **Pass-by-reference**: The ask function uses memory references (&) to update variables in the main program directly.
- **Default Arguments**: The header file provides a default pronoun of "they/them" if one is not specifically provided during initialization.

## How to Compile and Run
To compile all parts of the profile system together, use the following command in your terminal:

```
Bash
g++ app.cpp profile.cpp -o ooya_profile
./ooya_profile
```

## Example Profile Output
After the user completes the questionnaire, the system generates a formatted summary:

```
Name: Sam
Age: 25
City: New York
Country: USA
Pronouns: he/him
Hobbies:
 - Reading
 - Coding
 - Hiking
```
