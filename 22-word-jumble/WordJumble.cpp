/**
 * TicTacToe.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * classic word jumble game
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main() {
  using namespace std;

  enum fields {WORD, HINT, NUM_FIELDS};
  const int NUM_WORDS = 5;
  const string WORDS[NUM_WORDS][NUM_FIELDS] =
  {
    {"wall", "Do you feel you're banging your head against something?"},
    {"glasses", "These might help you see the answer"},
    {"labored", "Going slowly, is it?"},
    {"persistent", "Keep at it."},
    {"jumble", "It's what the game is all about."}
  };

  srand(static_cast<unsigned int>(time(0)));
  int choice = (rand() % NUM_WORDS);

  // Word to guess
  string theWord = WORDS[choice][WORD];

  // Hint for the word
  string theHint = WORDS[choice][HINT];

  // Jumbling the word
  string jumble = theWord; // jumbled version of word
  int length = jumble.size();
  for(int i = 0; i < length; ++i) {
    int index1 = (rand() % length);
    int index2 = (rand() % length);
    char temp = jumble[index1];
    jumble[index1] = jumble[index2];
    jumble[index2] = temp;
  }

  // Welcoming the player
  cout << "Welcome to word jumble !" << endl << endl;
  cout << "Unscramble the letters to make a word." << endl;
  cout << "Enter 'hint' for a hunt." << endl;
  cout << "Enter 'quit' to quit the game." << endl;
  cout << "The jumble is: " << jumble;

  string guess;
  cout << endl << endl << "Your guess: ";
  cin >> guess;

  while((guess != theWord) && (guess != "quit")) {
    if (guess == "hint") {
      cout << theHint;
    } else {
      cout << "Sorry, that's not it.";
    }

    cout << endl << endl << "Your guess: ";
    cin >> guess;
  }

  if (guess == theWord) {
    cout << endl << "That's it! You guessed it!" << endl;
  }

  cout << endl << "Thanks for playing." << endl;

  return 0;
}
