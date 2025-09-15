#include <iostream>

using namespace std;

int main() {

  bool validInput = false;
  int myNumber;

  while(!validInput) {
    cout << "Pick a number between one and ten!" << endl;
    cin >> myNumber;

    if(myNumber >= 1 && myNumber <= 10) {
      validInput = true;
    }
  }

  cout << "Your number is " << myNumber << endl;

  return 0;
}
