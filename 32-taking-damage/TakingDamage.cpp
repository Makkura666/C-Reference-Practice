/**
 * TakingDamage.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * function inlining
 */

#include <iostream>
using namespace std;

int radiation(int health);

int main() {
  int health = 80;
  cout << "Your health is " << health << endl << endl;

  health = radiation(health);
  cout << "After radiation exposure your health is " << health << endl << endl;

  health = radiation(health);
  cout << "After radiation exposure your health is " << health << endl << endl;

  health = radiation(health);
  cout << "After radiation exposure your health is " << health << endl << endl;

  return 0;
}

inline int radiation(int health) {
  return (health / 2);
}
