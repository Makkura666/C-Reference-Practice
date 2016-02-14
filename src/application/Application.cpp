/**
 * Application.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 *  Application branching point
 */

#include "Application.h"
#include <iostream>

Application::Application()
{}

void Application::intro(const char *className, const char *classDescription) const
{
  using namespace std;
  cout << "/**" << endl;
  cout << " * " << className << endl;
  cout << " * " << classDescription << endl;
  cout << " */" << endl << endl;
}

int Application::run() const
{
  return 1;
}
