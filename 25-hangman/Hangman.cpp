/**
 * Hangman.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * a game of hangman
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>     // includes unctions for converting chars to uppercase

int main() {
  using namespace std;

  // SETUP
  const int MAX_WRONG = 8;

  vector<string> words;
  words.push_back("GUESS");
  words.push_back("HANGMAN");
  words.push_back("DIFFICULT");

  srand(static_cast<unsigned int>(time(0)));
  random_shuffle(words.begin(), words.end());
  const string THE_WORD = words[0];
  int wrong = 0;
  string soFar(THE_WORD.size(), '-');
  string used = "";

  cout << "Welcome to hangman. Good Luck!" << endl;

  // MAIN LOOP
  while ((wrong < MAX_WRONG) && (soFar != THE_WORD)) {
    cout << endl << endl << "You have " << (MAX_WRONG - wrong);
    cout << " incorrect guesses left." << endl;
    cout << endl << "You've used the following letters:" << endl << used << endl;
    cout << endl << "So far, the word is:" << endl << soFar << endl;

    // PLAYER INPUT
    char guess;
    cout << endl << "Enter your guess: ";
    cin >> guess;
    guess = toupper(guess);
    while (used.find(guess) != string::npos) {
      cout << endl << "You've already guessed " << guess << endl;
      cout << "Enter your guess: ";
      cin >> guess;
      guess = toupper(guess);
    }

    used += guess;

    if (THE_WORD.find(guess) != string::npos) {
      cout << "That's right! " << guess << " is in the word." << endl;

      // update soFar to include newly guessed letter
      for (int i = 0; i < THE_WORD.length(); ++i) {
        if(THE_WORD[i] == guess) {
          soFar[i] = guess;
        }
      }
    } else {
      cout << "Sorry, " << guess << " isn't in the word." << endl;
      ++wrong;
    }
  }

  // SHUT DOWN
  if (wrong == MAX_WRONG) {
    cout << endl << "You've been hanged !";
  } else {
    cout << endl << "You've guessed it!";
  }

  cout <<  endl << "The word was " << THE_WORD << endl;

  return 0;
}
