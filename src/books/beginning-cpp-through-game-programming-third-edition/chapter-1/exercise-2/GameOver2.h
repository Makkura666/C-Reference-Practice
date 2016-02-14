/**
 * GameOver2.h
 * Contributors:
 *  * Jens Ackou
 * Description:
 * The almighty hello world of the game dev world !
 */

#ifndef GAMEOVER2
#define GAMEOVER2

#include "../../../../application/Application.h"

class GameOver2 : public Application
{
public:

  GameOver2();
  virtual int run() const;

private:

  void example1() const;
  void example2() const;
};

#endif /* ifndef GAMEOVER2 */
