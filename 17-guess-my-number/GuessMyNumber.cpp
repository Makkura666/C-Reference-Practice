/**
 * GuessMyNumber.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * Classic number guessing game
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
  using namespace std;

  // Random number
  srand(static_cast<unsigned int>(time(0)));
  int secretNumber = rand() % 100 + 1;

  int tries = 0;
  int guess;

  cout << endl << "Welcome to Guess My Number !" << endl;

  do {
    cout << "Enter a guess: ";
    cin >> guess;
    ++tries;

    if (guess > secretNumber) {
      cout << "Too high !" << endl << endl;
    } else if (guess < secretNumber) {
      cout << "Too low !" << endl << endl;
    } else {
      cout << "That's it! You got it in " << tries << " guesses!" << endl;
    }
  } while (guess != secretNumber);

  return 0;
}
