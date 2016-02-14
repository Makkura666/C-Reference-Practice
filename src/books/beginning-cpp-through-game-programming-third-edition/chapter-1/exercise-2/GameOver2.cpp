/**
 * GameOver2.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 *  Using the "using" directive to get rid of those std:: prefixes
 */

#include "GameOver2.h"
#include <iostream>

GameOver2::GameOver2()
{}

void GameOver2::example1() const
{
  using namespace std;
  cout << "[EXAMPLE1] Omitting 'std::' with 'using namespace std'." << endl;
}

void GameOver2::example2() const
{
  using std::cout;
  using std::endl;
  cout << "[EXAMPLE2] Less overhead by using a specific directive." << endl;
}

int GameOver2::run() const
{
  Application::intro("GameOver2",
                     "Using the 'using' directive to get rid of those std:: prefixes");

  example1();
  example2();

  return 0;
}
