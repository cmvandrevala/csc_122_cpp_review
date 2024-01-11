# CSC 122 Chapter 2

These notes cover some of the basic operations when writing programs in C++.

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

## 3. Arithmetic

* There are standard operations for arithmetic included in C++, right out of the box
* Note how the division of integers yields a whole integer
* The remainder operator yields the remainder after division
* What happens if you choose zero for `numberOne`? Is this expected?
* What happens if you choose zero for `numberTwo`? Is this expected?

## 4. Comparisons

* These are some of the comparison operators that are included in C++, right out of the box
* What happens if you enter a string instead of a number at the prompt?

## 5. Conditionals

* You can use the comparisons within the `if(...)` statement
* You can combine arithmetic and comparisons to make more complicated `if` statements

## 6. Using Keyword

* You can make your code less verbose by specifying `using std::cout`, `using std::cin`, and `using std::endl`
