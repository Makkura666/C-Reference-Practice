/**
 * Counter.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * Demonstrating for loops
 */

#include <iostream>

int main() {
  using namespace std;

  cout << endl << "Counting forward:" << endl;
  for(int i = 0; i < 10; ++i) {
    cout << i << " ";
  }

  cout << endl << "Counting backward:" << endl;
  for(int i = 9; i >= 0; --i) {
    cout << i << " ";
  }

  cout << "Counting by fives:" << endl;
  for(int i = 0; i <= 50; i += 5) {
    cout << i << " ";
  }

  cout << "Counting with null statements:" << endl;
  int count  = 0;
  for( ; count < 10;) {
    cout << count << " ";
    count++;
  }

  cout << "Counting with nested for loops:" << endl;
  const int ROWS = 5;
  const int COLUMNS = 3;
  for(int i = 0; i < ROWS; ++i) {
    for(int j = 0; j < COLUMNS; ++j) {
      cout << i << "," << j << "  ";
    }

    cout << endl;
  }

  return 0;
}
