/**
 * ScoreRater3.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * Demonstrates if else-if else suite
 */

#include "ScoreRater3.h"
#include <iostream>

ScoreRater3::ScoreRater3()
{}

int ScoreRater3::run() const
{
  Application::intro("ScoreRater3", "Demonstrates if else-if else suite");

  int score;
  std::cout << "[APPLICATION] Enter your score: ";
  std::cin << score;

  if (score >= 1000)
  {
    std::cout << "[APPLICATION] You scored 1000 or more. Impressive !" <<
    std::endl;
  }
  else if (score >= 500)
  {
    std::cout << "[APPLICATION] You scored 500 or more. Nice !" << std::endl;
  }
  else if (score >= 250)
  {
    std::cout << "[APPLICATION] You scored 250 or more. Decent !" << std::endl;
  } else {
    std::cout <<
    "[APPLICATION] You scored less than 250. Nothing to brag about." << std::endl;
  }

  return 0;
}
