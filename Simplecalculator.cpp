#include <iostream>
using namespace std;

int main() {

  int a;
  float num1, num2;

  cout << "Welcome to calculator!\n";
  cout << "Press 1 for add\nPress 2 for sub\nPress 3 for div\nPress 4 for multiply\n";

  cin >> a;

  cout << "Enter any two numbers\n";
  cin >> num1 >> num2;

  switch(a) {

    case 1:
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case 2:
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case 3:
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    case 4:
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    default:
      cout << "We assumed found some error!";
      break;
  }

  return 0;
}
