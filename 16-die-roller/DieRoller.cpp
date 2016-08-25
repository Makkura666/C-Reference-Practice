/**
 * DieRoller.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * Generating random numbers
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
  using namespace std;

  // Seed the random generator based on the current date & time
  // static_cast casts the number to an unsigned int
  srand(static_cast<unsigned int>(time(0)));

  // Generate random number
  int randomNumber = rand();

  // Get a number between 1 and 6
  int die = (randomNumber % 6) + 1;
  cout << "You rolled a " << die << endl;

  return 0;
}
