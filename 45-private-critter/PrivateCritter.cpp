/**
 * PrivateCritter.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * demonstrates setting member access levels
 */

#include <iostream>
using namespace std;

class Critter {
public:    // begin public section
  Critter(int hunger = 0);    // constructor prototype
  void Greet();
  void SetHunger(int hunger);

private:  // begin private section
  int m_Hunger;
};

Critter::Critter(int hunger) {
  cout << "A new critter has been born!" << endl;
  m_Hunger = hunger;
}

void Critter::Greet() {
  cout << "Hi, I'm a critter. My hunger level is " << m_Hunger << "." << endl;
}

void SetHunger(int hunger) {
  if (hunger < 0) {
    cout << "You can't set a critter's hunger to a negative number." << endl << endl;
  } else {
    m_Hunger = hunger;
  }
}

int main() {
  Critter crit(5);
  //cout << crit.m_Hunger;  // illegal, m_Hunger is private !
  cout << "Calling GetHunger(): " << crit.GetHunger() << endl << endl;

  cout << "Calling SetHunger() with -1." << endl;
  crit.SetHunger(-1);

  cout << "Calling SetHunger() with 0." << endl;
  crit.SetHunger(9);
  cout << "Calling GetHunger(): " << crit.GetHunger() << endl << endl;

  return 0;
}
