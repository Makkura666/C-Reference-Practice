/**
 * Main.cpp
 * Contributors:
 *	* Jens Ackou
 * Description:
 *	Main entry point.
 */

#include "header.h"

int main(int argc, const char *argv[])
{
  do {
    clear();
    introduction();
    menu();
    initApplication(choice());
    pauseTerminal();
  } while (loop);

  return 0;
}
