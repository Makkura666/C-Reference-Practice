/**
 * ScoreRater2.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * Demonstrates an else clause
 */

#include "ScoreRater2.h"
#include <iostream>

ScoreRater2::ScoreRater2()
{}

int ScoreRater2::run() const
{
  Application::intro("ScoreRater2", "Demonstrates an else clause");

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
