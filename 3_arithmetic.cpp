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
  std::cout << "The sum is " << numberOne + numberTwo << std::endl;
  std::cout << "The difference is " << numberOne - numberTwo << std::endl;
  std::cout << "The product is " << numberOne * numberTwo << std::endl;
  std::cout << "Division yields " << numberOne / numberTwo << std::endl;
  std::cout << "The remainder is " << numberOne % numberTwo << std::endl;

  return 0;
}
