/**
 * Swap.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * passing references to alter argument variables
 */

#include <iostream>
using namespace std;

void badSwap(int x, int y);
void goodSwap(int& x, int& y);

int main() {
  int myScore = 150;
  int yourScore = 1000;
  cout << "myScore: " << myScore << endl;
  cout << "yourScore: " << yourScore << endl << endl;

  cout << "Calling badSwap()" << endl;
  badSwap(myScore, yourScore);
  cout << "myScore: " << myScore << endl;
  cout << "yourScore: " << yourScore << endl << endl;

  cout << "Calling goodSwap()" << endl;
  goodSwap(myScore, yourScore);
  cout << "myScore: " << myScore << endl;
  cout << "yourScore: " << yourScore << endl;

  return 0;
}

void badSwap(int x, int y) {
  int temp = x;
  x = y;
  y = temp;
}

void goodSwap(int& x, int& y) {
  int temp = x;
  x = y;
  y = temp;
}
