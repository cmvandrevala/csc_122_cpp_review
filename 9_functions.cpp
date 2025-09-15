#include <iostream>

using namespace std;

int add_some_numbers(int x, int y, int z) {
  return x + y + z;
}

void subtract_some_numbers(int &x, int y) {
  x -= y;
}

int main() {
  int x = 1;
  int y = 2;
  int z = 3;

  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  cout << "z = " << z << endl;
  cout << endl;

  cout << "add_some_numbers(x, y, z) = " << add_some_numbers(x, y, z) << endl << endl;

  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  cout << "z = " << z << endl;
  cout << endl;

  subtract_some_numbers(x, y);

  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  cout << "z = " << z << endl;

  return 0;
}
