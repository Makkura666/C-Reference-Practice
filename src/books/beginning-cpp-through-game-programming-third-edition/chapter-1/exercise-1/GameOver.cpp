/**
 * GameOver.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 *  The almighty hello world of the game dev world !
 */

#include "GameOver.h"
#include <iostream>

GameOver::GameOver()
{}

int GameOver::run() const
{
  Application::intro("GameOver",
                     "The almighty hello world of the game dev world !");
  std::cout << "[APPLICATION] Game Over!" << std::endl;

  return 0;
}
