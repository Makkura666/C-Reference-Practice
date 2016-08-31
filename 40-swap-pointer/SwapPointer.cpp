/**
 * SwapPointer.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * passing constant pointers to alter argument variables
 */

#include <iostream>
using namespace std;

void badSwap(int x, int y);
void goodSwap(int* const pX, int* const pY);

int main() {
  int myScore   = 150;
  int yourScore = 1000;
  cout << "Original values" << endl;
  cout << "myScore: "       << myScore   << endl;
  cout << "yourScore: "     << yourScore << endl << endl;

  cout << "Calling badSwap()" << endl;
  badSwap(myScore, yourScore);
  cout << "myScore: "   << myScore << endl;
  cout << "yourScore: " << yourScore << endl << endl;

  cout << "Calling goodSwap()" << endl;
  goodSwap(&myScore, &yourScore);
  cout << "myScore: " << myScore << endl;
  cout << "yourScore: " << yourScore << endl;

  return 0;
}

void badSwap(int x, int y) {
  int temp = x;
  x = y;
  y = temp;
}

void goodSwap(int* const pX, int* const pY) {
  // store value pointed to by pX in temp
  int temp = *pX;

  // store value pointed to by pY in address pointed to by pX
  *pX = *pY;

  // store value originally ointed to by pX in address pointed by pY
  *pY = temp;
}
