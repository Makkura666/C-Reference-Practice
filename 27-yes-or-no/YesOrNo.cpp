/**
 * YesOrNo.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * return values and parameters
 */

#include <iostream>
using namespace std;

// function prototype (declaration)
char askYesNo1();
char askYesNo2(string question);

int main() {
  char answer1 = askYesNo1();
  cout << "Thanks for answering: " << answer1 << endl << endl;

  char answer2 = askYesNo2("Do you wish to save your game?");
  cout << "Thanks for answering: " << answer2 << endl << endl;

  return 0;
}

// function definition
char askYesNo1() {
  char response1;
  do {
    cout << "Please enter 'y' or 'n': ";
    cin >> response1;
  } while (response1 != 'y' && response1 != 'n');

  return response1;
}

char askYesNo2(string question) {
  char response2;
  do {
    cout << question << " (y/n): ";
    cin >> response2;
  } while (response2 != 'y' && response2 != 'n');

  return response2;
}
