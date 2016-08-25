/**
 * PlayAgain.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * Using while loops
 */

#include <iostream>

int main() {
  using namespace std;

  char again = 'y';
  while(again == 'y') {
    cout << endl << "**Played an exciting game !**";
    cout << endl << "Do you want to play again? (y/n):";
    cin >> again;
  }

  cout << endl << "Okay, bye.";

  return 0;
}
