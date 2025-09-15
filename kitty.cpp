#include <iostream>

#include "kitty.hpp"

Kitty::Kitty(std::string n) {
  name = n;
  fluffiness = 5;
}

void Kitty::set_fluffiness(int f) {
  if(f > 9000) {
    std::cout << "IT'S OVER 9000!!!!!!!!" << std::endl;
  }
  fluffiness = f;
}

void Kitty::pet() {
  std::cout << "You are petting " << name << "." << std::endl;
  if(fluffiness < 100) {
    std::cout << "They are pretty fluffy. Nothing to write home about." << std::endl;
  } else {
    std::cout << "The floofitude is too much to handle!" << std::endl;
  }
}
