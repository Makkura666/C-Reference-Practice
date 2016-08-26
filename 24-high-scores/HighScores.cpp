/**
 * HighScores.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * demonstrates algorithms
 */

 /*
    Functions to take into account when researching vector performance
    capacity() - returns the number of elements vector can hold before a program must reallocate more memory for it
    reserve()  - gives you control when to reallocate more memory for our vector

    Other STL Containers
    deque    (double ended queue)                                            - sequential
    list     (linear list)                                                   - sequential
    map      (Collection of key/value pairs in which each key has one value) - associative
    multimap (Same as above but can have more then one value)                - associative
    multiset (collection of not unique elements)                             - associative
    priority_queue                                                           - adaptor
    queue                                                                    - adaptor
    set      (collection of unique elements)                                 - associative
    stack                                                                    - adaptor
    vector   (dynamic array)                                                 - sequential
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

int main() {
  using namespace std;

  // Create iterator where you can't change the pointed value
  vector<int>::const_iterator iter;

  // Push 3 integers in a scores vector
  cout << "Creating a list of scores.";
  vector<int> scores;
  scores.push_back(1500);
  scores.push_back(3500);
  scores.push_back(7500);

  // Print all the scores
  cout << endl << "High scores:" << endl;
  for (iter = scores.begin(); iter != scores.end(); ++iter) {
    cout << *iter << endl;
  }

  // Point the iterator at the found score
  cout << endl << "Finding a score.";
  int score;
  cout << endl << "Enter a score to find: ";
  cin >> score;
  iter = find(scores.begin(), scores.end(), score);
  if (iter != scores.end()) {
    cout << "Score found." << endl;
  } else {
    cout << "Score not found." << endl;
  }

  // Randomize the order of the scores
  cout << endl << "Randomizing scores.";
  srand(static_cast<unsigned int>(time(0)));
  random_shuffle(scores.begin(), scores.end());
  cout << endl << "High scores:" << endl;
  for (iter = scores.begin(); iter != scores.end(); ++iter) {
    cout << *iter << endl;
  }

  // Sort the scores by value
  cout << endl << "Sorting scores.";
  sort(scores.begin(), scores.end());
  cout << endl << "High scores:" << endl;
  for (iter = scores.begin(); iter != scores.end(); ++iter) {
    cout << *iter << endl;
  }

  return 0;
}
