#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int numberOne{0};
  int numberTwo{0};

  cout << "What is the first number? ";
  cin >> numberOne;

  cout << "What is the second number? ";
  cin >> numberTwo;

  if(numberOne > numberTwo) {
    cout << "Number one is greater than number two!" << endl;
  } else if(numberOne < numberTwo) {
    cout << "Number one is less than number two!" << endl;
  } else {
    cout << "The two numbers are equal!" << endl;
  }

  return 0;
}
