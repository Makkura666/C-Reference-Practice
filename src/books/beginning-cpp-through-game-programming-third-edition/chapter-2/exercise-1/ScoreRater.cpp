/**
 * ScoreRater.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * Demonstrates the if statement
 */

#include "ScoreRater.h"
#include <iostream>

ScoreRater::ScoreRater()
{}

int ScoreRater::run() const
{
  Application::intro("ScoreRater", "Demonstrates the if statement");

  if (true)
  {
    std::cout << "[APPLICATION] This is always displayed." << std::endl;
  }

  if (false)
  {
    std::cout << "[APPLICATION] This is never displayed.";
  }

  int score = 1000;

  if (score)
  {
    std::cout << "[APPLICATION] At least you didn't score zero." << std::endl;
  }

  if (score >= 250)
  {
    std::cout << "[APPLICATION] You scored 250 or more. Decent." << std::endl;
  }

  if (score >= 500)
  {
    std::cout << "[APPLICATION] You scored 500 or more. Nice." << std::endl;

    if (score >= 1000)
    {
      std::cout << "[APPLICATION] You scored 1000 or more. Impressive." <<
        std::endl;
    }
  }

  return 0;
}

/*
   Relational Operators
   --------------------
   Operators   Meaning           Sample Expression   Evaluates To
   ==          equal to          5 == 5              true
                                 5 == 8              false
   !=          not equal to      5 != 8              true
                                 5 != 8              false
   >           greater than      8 > 5               true
                                 5 > 8               false
   <           less than         5 < 8               true
                                 8 < 5               false
   >=          greater than      8 >= 5              true
               or equal to       5 >= 8              false
   <=          less than         5 <= 8              true
               or equal to       8 <= 5              false
 */
