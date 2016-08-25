/**
 * MenuChooser.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * Demonstrates the switch statement
 */

#include <iostream>

int main() {
  std::cout << "Difficulty Levels" << std::endl << std::endl;
  std::cout << "1 - Easy" << std::endl;
  std::cout << "2 - Normal" << std::endl;
  std::cout << "3 - Hard" << std::endl;

  int choice;
  std::cout << "Choice: ";
  std::cin >> choice;

  switch (choice) {
  case 1:
    std::cout << "You picked Easy." << std::endl;
    break;

  case 2:
    std::cout << "You picked Normal." << std::endl;
    break;

  case 3:
    std::cout << "You picked Hard." << std::endl;
    break;

  default:
    std::cout << "You made an illegal choice." << std::endl;
    break;
  }

  return 0;
}
