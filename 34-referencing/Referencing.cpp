/**
 * Referencing.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * using references
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
  int myScore = 1000;
  int& mikesScore = myScore; // create a reference

  cout << "myScore is: " << myScore << endl;
  cout << "mikesScore is: " << mikesScore << endl << endl;

  cout << "Adding 500 to myScore" << endl;
  myScore += 500;
  cout << "myScore is: " << myScore << endl;
  cout << "mikesScore is: " << mikesScore << endl << endl;

  cout << "Adding 500 to mikesScore" << endl;
  mikesScore += 500;
  cout << "myScore is: " << myScore << endl;
  cout << "mikesScore is: " << mikesScore << endl << endl;

  return 0;
}
