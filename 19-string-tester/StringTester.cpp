/**
 * StringTester.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * String objects
 */

#include <iostream>
#include <string>

int main() {
  using namespace std;

  string word1 = "Game";
  string word2("Over");
  string word3(3, '!');

  string phrase = word1 + " " + word2 + word3;
  cout << "The phrase is: " << phrase << endl << endl;

  cout << "The phrase has " << phrase.size() << " characters in it." << endl << endl;

  cout << "The character at position 0 is: " << phrase[0] << endl << endl;

  cout << "Changing th character at position 0." << endl;

  phrase[0] = 'L';
  cout << "Changing the character at position 0." << endl;
  cout << "The phrase is now: " << phrase << endl << endl;

  for (unsigned int i = 0; i < phrase.size(); ++i) {
    cout << "Character at position " << i << " is: " << phrase[i] << endl;
  }

  cout << endl << "The sequence 'Over' begint at location: " << phrase.find("Over") << endl;

  // String object returns a special constant which can be accessed with string::npos
  // Constant represents the largest possible size of a string object
  // it is greater than any possible valid position number in a string object
  // This means "a position number that can't exist"
  if (phrase.find("eggplant") == string::npos) {
    cout << "'eggplant' is not in the phrase." << endl << endl;
  }

  phrase.erase(4, 5);
  cout << "The phrase is now: " << phrase << endl;

  phrase.erase(4);
  cout << "The phrase is now: " << phrase << endl;

  phrase.erase();
  cout << "The phrase is now: " << phrase << endl;

  if(phrase.empty()) {
    cout << endl << "The phrase is no more." << endl;
  }

  return 0;
}
