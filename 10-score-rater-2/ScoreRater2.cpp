/**
 * ScoreRater2.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * Demonstrates an else clause
 */

#include <iostream>

int main()
{
  int score;

  std::cout << "[APPLICATION] Enter your score: ";

  std::cin >> score;

  if (score >= 1000)
  {
    std::cout << "[APPLICATION] You scored 1000 or more. Impressive." <<
      std::endl;
  } else {
    std::cout << "[APPLICATION] You scored less than 1000." << std::endl;
  }

  return 0;
}
