# CSC 122 Chapter 2

## 1. Hello World

* The symbols `//` and `/* */` specify comments
* `#include` is a preprocessing directive
* `main` is the entrypoint to the program that will be run
* `std::` is a namespace for functions defined in `iostream`
* `<<` is the stream insertion operator - it points towards where data should go
* `\n` represents a newline. The backslash is called an escape character
* `return 0` exits the function successfully

## 2. Addition

* You might need to specify C++ 11 specifically when you compile. For me, I have to use:

  ```bash
  g++ -std=c++11 2_addition.cpp
  ```

* You can use `cin` to read in values from the user
* The notation `int numberOne{0}` is called list initialization (introduced in C++ 11)
* You can chain parts of a string in `cout`. This is also called concatenating.

  ```bash
  std::cout << "The sum is " << sum << std::endl;
  ```

* What happens if I don't declare `numberOne`, `numberTwo`, or `sum`? Why?
* What happens if I type in a decimal for one of the numbers? Why?
