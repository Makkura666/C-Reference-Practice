/**
 * Pointing.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * demonstrates using pointers
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
  // declare a pointer
  int* pAPointer;

  // declare and initialize a pointer
  int* pScore = 0;

  // assign pointer pScore address of variable score
  int score = 1000;
  pScore = &score;

  cout << "Assigning &score to pScore" << endl;
  cout << "&score is: " << &score   << endl;          // address of score
  cout << "pScore is: " << pScore   << endl;          // address of score
  cout << "score is: "  << score    << endl;          // 1000
  cout << "*pScore is: "<< *pScore  << endl << endl;  // 1000

  cout << "Adding 500 to score" << endl;
  score += 500;
  cout << "score is: "  << score    << endl;          // 1500
  cout << "*pScore is: " << *pScore << endl;          // 1500

  cout << "Adding 500 to *pScore" << endl;
  *pScore += 500;
  cout << "score is: "  << score    << endl;          // 2000
  cout << "*pScore is: " << *pScore << endl << endl;  // 2000

  cout << "Assigning &newScore to pScore" << endl;
  int newScore = 5000;
  pScore = &newScore;
  cout << "&newScore is: " << &newScore << endl;      // address of newScore
  cout << "pScore is: "    << pScore    << endl;      // address of newScore
  cout << "newScore is: "  << newScore  << endl;      // 5000
  cout << "*pScore is:"    << *pScore   << endl << endl; // 5000

  cout << "Assigning &str to pStr" << endl;
  string str   = "score";
  string* pStr = &str; // pointer to string object
  cout << "str is: "            << str            << endl;  // "score"
  cout << "*pStr is: "          << *pStr          << endl;  // "score"
  cout << "(*pStr).size() is: " << (*pStr).size() << endl;  // 5
  cout << "pStr->size() is: "   << pStr->size()   << endl;  // 5

  return 0;
}
