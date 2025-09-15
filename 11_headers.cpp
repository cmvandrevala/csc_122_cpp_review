#include <iostream>

#include "kitty.hpp"

int main() {
  Kitty sassy = Kitty("Sassy");
  Kitty suki = Kitty("Suki");
  Kitty stinky = Kitty("Stinky");

  sassy.set_fluffiness(9);
  suki.set_fluffiness(7);
  stinky.set_fluffiness(9001);

  sassy.pet();
  suki.pet();
  stinky.pet();
}
