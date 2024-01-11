#include <iostream>

int main() {
  int numberOne{0};
  int numberTwo{0};

  std::cout << "What is the first number? ";
  std::cin >> numberOne;

  std::cout << "What is the second number? ";
  std::cin >> numberTwo;

  if(numberOne > numberTwo) {
    std::cout << "Number one is greater than number two!" << std::endl;
  } else if(numberOne < numberTwo) {
    std::cout << "Number one is less than number two!" << std::endl;
  } else {
    std::cout << "The two numbers are equal!" << std::endl;
  }

  return 0;
}
