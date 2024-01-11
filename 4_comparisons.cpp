#include <iostream>

int main() {
  int numberOne{0};
  int numberTwo{0};

  std::cout << "What is the first number? ";
  std::cin >> numberOne;

  std::cout << "What is the second number? ";
  std::cin >> numberTwo;

  std::cout << "The first number is " << numberOne << std::endl;
  std::cout << "The second number is " << numberTwo << std::endl;
  std::cout << "Greater than -> " << (numberOne > numberTwo) << std::endl;
  std::cout << "Less than -> " << (numberOne < numberTwo) << std::endl;
  std::cout << "Greater than or equal -> " << (numberOne >= numberTwo) << std::endl;
  std::cout << "Less than or equal -> " << (numberOne <= numberTwo) << std::endl;
  std::cout << "Equal -> " << (numberOne == numberTwo) << std::endl;
  std::cout << "Not Equal -> " << (numberOne != numberTwo) << std::endl;

  return 0;
}
