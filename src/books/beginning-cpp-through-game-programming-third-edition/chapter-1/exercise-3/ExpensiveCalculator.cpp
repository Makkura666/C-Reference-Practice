/**
 * ExpensiveCalculator.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * Some basic arithmetic operations
 */

#include "ExpensiveCalculator.h"
#include <iostream>

ExpensiveCalculator::ExpensiveCalculator()
{}

int ExpensiveCalculator::run() const
{
  Application::intro("ExpensiveCalculator", "Some basic arithmetic operations");
  std::cout << "[APPLICATION] 7 + 3 = " << 7 + 3 << std::endl;
  std::cout << "[APPLICATION] 7 - 3 = " << 7 - 3 << std::endl;
  std::cout << "[APPLICATION] 7 * 3 = " << 7 * 3 << std::endl;

  std::cout << "[APPLICATION] 7 / 3 = " << 7 / 3 << std::endl;
  std::cout << "[APPLICATION] 7.0 / 3.0 = " << 7.0 / 3.0 << std::endl;

  std::cout << "[APPLICATION] 7 % 3 = " << 7 % 3 << std::endl;

  std::cout << "[APPLICATION] 7 + 3 * 5 = " << 7 + 3 * 5 << std::endl;
  std::cout << "[APPLICATION] (7 + 3) * 5 = " << (7 + 3) * 5 << std::endl;

  return 0;
}
