# Study_C-_Text-Adventure-Store-POS-records

This small project is my first documentation on my study of C++ as a begineer. It simulates a simple Point-of-Sale (POS) system for a robot repair shop called FixEverything. It allows the shop to record customer repair requests, calculate service costs, apply tax, and confirm whether the customer wants to proceed with the repair.

The program is written in C++ and runs in the terminal.

## Features

- Accepts customer names and robot repair problems
- Supports three types of repairs:

  + Hardware issues – $50
  + Software issues – $40
  + Battery issues – $30

- Calculates final price including 7% tax
- Allows the customer to accept or decline the repair
- Rejects problems that the shop cannot fix
- Simulates 5 customer transactions

## Supported Repair Problems

| **Category** | **Problems**                     | **Price** |
| -------- | ------------------------------------ | ----- |
| Hardware | internal fan, shell, joint damage    | $50   |
| Software | OS crash, navigation bug             | $40   |
| Battery  | battery replacement, charging issues | $30   |

## How program works

- The program greets the customer.
- The user enters their name.
- The user enters the robot problem.
- The program checks if the shop can fix it.
- If supported:

  + The price is calculated.
  + 7% tax is added

- The user chooses whether to continue with the repair.
- The program processes 5 customers in total.

## Example output

```
Hello, this is FixEverything shop! What can I help you?
What should I call you: Alex

Okay, so we can only help you to fix these problems:
+ Hardware (internal fan, shell, joint damage) - $50
+ Software (OS crash, navigation bug) - $40
+ Battery (battery replacement, charging issue) - $30

What is the problem of your robot: OS crash

So the expected price would be: $42.8
Do you wish to continue to fix or not? [Y/N]
Y

Okay, I will fix your OS crash problem. It will cost you $42.8
I will send you your bill later
Thank you for trusting our service!
```

## How to run

Compile the program:
```
g++ Store_purchase_record.cpp -o repair_shop
```

Run it:
```
./repair_shop
```

## Technology used
- C++
- Standard libraries:
  + ```<iostream>```
  + ```<string>```

