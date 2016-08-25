/**
 * FinickyCounter.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * While loop and if statements
 */

#include <iostream>

int main() {
  using namespace std;

  int count = 0;
  while(true) {
    count += 1;

    // End loop if count is greater tha 10
    if (count > 10) {
      break;
    }

    // Skip the number 5
    if (count == 5) {
      continue;
    }

    cout << count << endl;
  }

  return 0;
}
