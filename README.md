# Simple Calculator in C++
## Overview
This project is a simple calculator implemented in C++. It performs basic arithmetic operations such as addition, subtraction, multiplication, division, and modulus. The calculator takes input from the user for the operation and numbers, handles invalid input, and displays the result.

# Features
- Addition (+)
- Subtraction (-)
- Multiplication (*)
- Division (/)
- Handles division by zero errors.
- Modulus (%)
-- Only works with integers (non-decimal numbers).
- Repeated calculations without restarting the program.

# Getting Started
## Prerequisites
-A C++ compiler (like g++ or clang++).
-A terminal or an IDE that supports C++ (like Visual Studio Code).
##Running the Program
1. Clone the Repository:

```bash
git clone https://github.com/reBrodie/simpleCalculatorCpp.git
cd simpleCalculatorCpp
```
2. Compile the Program:

Use g++ or any other compiler:

```bash
g++ main.cpp -o calculator
```
3. Run the Program:

After compiling, run the executable:

```bash
./calculator
```
#How to Use
1. When prompted, enter an arithmetic operation: +, -, *, /, or %.
2. Enter the two numbers you want to perform the operation on.
3. The result will be displayed in the console.
4. After each calculation, you can choose to perform another calculation by typing y or exit by typing n.
# Example
text
Copy code
Enter an operation (+, -, *, /, %):
+
Enter first number:
4
Enter second number:
5
Results = 9
Do you wish to perform another calculation? (y/n)
y
Error Handling
Division by zero is handled with an error message and the program allows you to re-enter a valid divisor.
If an invalid operation is entered, the program prompts you to enter a valid operation.
Contributing
If you'd like to contribute to this project, feel free to fork the repository and submit a pull request!

License
This project is open-source and available under the MIT License.
