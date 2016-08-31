/**
 * FriendCritter.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * demonstrates friend functions and operator overloading
 */

 /*
  Friend functions have complete access to any member of a class
  Operator overloading allows you to define new meanings for built-in operators
  as they relate to objects of your own classes.
 */

#include <iostream>
#include <string>
using namespace std;

class Critter {
// make following global functions friends of the Critter class
friend void Peek(const Critter& a Critter);
friend ostream& operator<<(ostream& os, const Critter& aCritter);

public:
  Critter(const string& name = "");

private:
  string m_Name;
};

Critter::Critter(const string& name):
  m_Name(name)
{}

void Peek(const Critter& aCritter);
ostream& operator<<(ostream& os, const Critter& aCritter);

int main() {
  Critter crit("Poochie");

  cout << "Calling Peek() to access crit's private data member, m_Name:" << endl;
  peek(crit);

  cout << endl << "Sending crit object to cout with the << operator:" << endl;
  cout << crit;

  return 0;
}

// global friend function which can access all of Critter object's members
void Peek(const Critter& aCritter) {
  cout << aCritter.m_Name << endl;
}

// global friend function which can access all of Critter object's members
// overloads the << operator so you can send a Critter object to cout
ostream& operator<<(ostream& os, const Critter& aCritter) {
  os << "Critter object - ";
  os << "m_Name: " << aCritter.m_Name;
  return os;
}
