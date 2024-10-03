#include <iostream>
#include <string>

using namespace std;

double add(double firstNumber, double secondNumber) {
  return firstNumber + secondNumber;
}

double subtract(double firstNumber, double secondNumber) {
  return firstNumber - secondNumber;
}

double multiply(double firstNumber, double secondNumber) {
  return firstNumber * secondNumber;
}

double divide(double firstNumber, double secondNumber) {
  return firstNumber / secondNumber;
}

int remainder(int firstNumber, int secondNumber) {
  return firstNumber % secondNumber;
}

void display(double result) {
  cout << "Results = " << result << endl;
}

void Calculator() {
  double firstNumber;
  double secondNumber;
  char operation;
  double result;

  cout << "Enter an operation(+, -, *, /, %): " << endl;
  cin >> operation;

  if (operation != '+' && operation != '-' && operation != '*' && operation != '/' && operation != '%') {
    cerr << "Please Enter a valid Operation: " << operation << endl;
    return;  // Return early if operation is invalid
  }

  cout << "Enter first number: " << endl;
  cin >> firstNumber;

  cout << "Enter second number: " << endl;
  cin >> secondNumber;

  switch (operation) {
  case '+':
    result = add(firstNumber, secondNumber);
    display(result);
    break;
  case '-':
    result = subtract(firstNumber, secondNumber);
    display(result);
    break;
  case '*':
    result = multiply(firstNumber, secondNumber);
    display(result);
    break;
  case '/':
    try {
      if (secondNumber == 0) {
        throw(secondNumber);
      } else {
        result = divide(firstNumber, secondNumber);
        display(result);
      }
    } catch (double errorValue) {
      cerr << "Divisor cannot be zero: " << errorValue << endl;
    }
    break;
  case '%':
    try {
      if (static_cast<int>(secondNumber) == 0) {
        throw(secondNumber);
      } else {
        result = remainder(static_cast<int>(firstNumber), static_cast<int>(secondNumber));
        display(result);
      }
    } catch (double errorValue) {
      cerr << "Divisor cannot be zero: " << errorValue << endl;
    }
    break;
  default:
    break;
  }
}

int main() {
  char choice;
  do {
    Calculator();
    cout << "Do you wish to perform another calculation? (y/n)" << endl;
    cin >> choice;
  } while (choice == 'y');
  return 0;
}
