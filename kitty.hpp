#pragma once

#include <string>

class Kitty {
  private:
    std::string name;
    int fluffiness;

  public:
    Kitty(std::string name);
    void set_fluffiness(int f);
    void pet();
};
