/**
 * InventoryDisplayer.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * constant references
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// parameter vec = constant reference to a vector of strings
// (pass a value, you don't want to change)
void display(const vector<string>& inventory);

int main() {
  vector<string> inventory;
  inventory.push_back("sword");
  inventory.push_back("armor");
  inventory.push_back("shield");

  display(inventory);

  return 0;
}

void display(const vector<string>& vec) {
  cout << "Your items:" << endl;
  for (vector<string>::const_iterator iter = vec.begin(); iter != vec.end(); ++iter) {
    cout << *iter << endl;
  }
}
