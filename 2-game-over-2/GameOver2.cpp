/**
 * GameOver2.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 *  Using the "using" directive to get rid of those std:: prefixes
 */

#include <iostream>

void example1()
{
  using namespace std;
  cout << "[EXAMPLE1] Omitting 'std::' with 'using namespace std'." << endl;
}

void example2()
{
  using std::cout;
  using std::endl;
  cout << "[EXAMPLE2] Less overhead by using a specific directive." << endl;
}

int main() {
  example1();
  example2();

  return 0;
}
