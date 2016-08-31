/**
 * StaticCritter.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * demonstrates static member variables and functions
 */

#include <iostream>
using namespace std;

class Critter {
public:
  static int s_Total;   // static member variable declaration
                        // total number of Critter objects in existence

  Critter(int hunger = 0);
  static int GetTotal();// static member function prototype

private:
  int m_Hunger;
};

int Critter::s_Total = 0;

Critter::Critter(int hunger):
    m_Hunger(hunger)
{
  cout << "A new critter has been born!" << endl;
    ++s_Total;
}

int Critter::GetTotal() {   // static member function definition
  return s_Total;
}

int main() {
  cout << "The total number of critters is: ";
  cout << Critter::s_Total << endl << endl;

  Critter crit1, crit2, crit3;

  cout << endl << "The total number of critters is: ";
  cout << Critter::GetTotal() << endl;

  return 0;
}
