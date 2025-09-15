#include <iostream>

class Kitty {
  private:
    std::string name;
    int fluffiness;

  public:
    Kitty(std::string n) {
      name = n;
      fluffiness = 5;
    }

    void set_fluffiness(int f) {
      if(f > 9000) {
        std::cout << "IT'S OVER 9000!!!!!!!!" << std::endl;
      }
      fluffiness = f;
    }

    void pet() {
      std::cout << "You are petting " << name << "." << std::endl;
      if(fluffiness < 100) {
        std::cout << "They are pretty fluffy. Nothing to write home about." << std::endl;
      } else {
        std::cout << "The floofitude is too much to handle!" << std::endl;
      }
    }
};


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
