/**
 * MenuChooser.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * Demonstrates the switch statement
 */

#include "MenuChooser.h"
#include <iostream>

MenuChooser::MenuChooser()
{}

int MenuChooser::run() const
{
  Application::intro("MenuChooser", "Demonstrates if else-if else suite");

  std::cout << "[APPLICATION] Difficulty Levels" << std::endl << std::endl;
  std::cout << "[APPLICATION] 1 - Easy" << std::endl;
  std::cout << "[APPLICATION] 2 - Normal" << std::endl;
  std::cout << "[APPLICATION] 3 - Hard" << std::endl;

  int choice;
  std::cout << "[APPLICATION] Choice: ";
  std::cin >> choice;

  switch (choice) {
  case 1:
    std::cout << "[APPLICATION] You picked Easy." << std::endl;
    break;

  case 2:
    std::cout << "[APPLICATION] You picked Normal." << std::endl;
    break;

  case 3:
    std::cout << "[APPLICATION] You picked Hard." << std::endl;
    break;

  default:
    std::cout << "[APPLICATION] You made an illegal choice." << std::endl;
    break;
  }

  return 0;
}
