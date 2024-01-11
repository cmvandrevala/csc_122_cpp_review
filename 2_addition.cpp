#include <iostream>

int main() {
  int numberOne{0};
  int numberTwo{0};
  int sum{0};

  std::cout << "What is the first number? ";
  std::cin >> numberOne;

  std::cout << "What is the second number? ";
  std::cin >> numberTwo;

  sum = numberOne + numberTwo;

  std::cout << "The sum is " << sum << std::endl;

  return 0;
}
