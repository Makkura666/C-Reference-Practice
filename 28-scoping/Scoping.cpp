/**
 * Scoping.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * demonstrates scopes
 */

#include <iostream>
using namespace std;

void func();

int main() {
  // local variable in main
  int var = 5;
  cout << "In main() var is: " << var << endl << endl;

  func();

  cout << "Back in main() var is: " << var << endl << endl;

  {
    cout << "In main() a new scope var is: " << var << endl << endl;

    cout << "Creating new var in new scope." << endl;
    int var = 10;
    cout << "In main() in a new scope var is: " << var << endl << endl;
  }

  cout << "At the end of main() var created in new scope no longer exists." << endl;
  cout << "At end of main() var is: " << var << endl;

  return 0;
}

void func() {
  int var = -5;
  cout << "In func() var is: " << var << endl << endl;
}
