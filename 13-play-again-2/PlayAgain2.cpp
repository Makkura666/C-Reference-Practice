/**
 * PlayAgain2.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * Using do while loops
 */

#include <iostream>

int main() {
  using namespace std;

  char again = 'y';
  do {
    cout << endl << "**Played an exciting game !**";
    cout << endl << "Do you want to play again? (y/n):";
    cin >> again;
  } while(again == 'y');

  cout << endl << "Okay, bye.";

  return 0;
}
