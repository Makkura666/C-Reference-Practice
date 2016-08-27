/**
 * InventoryReferencer.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * returning a reference
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// returns a reference to a string
string& refToElement(vector<string>& vec, int i);

int main() {
  vector<string> inventory;
  inventory.push_back("sword");
  inventory.push_back("armor");
  inventory.push_back("shield");

  // displays string that the returned reference refers to
  cout << "Sending the returned reference to cout:" << endl;
  cout << refToElement(inventory, 0) << endl << endl;

  // assigns one reference to another -- inexpensive assignment
  cout << "Assigning the returned reference to another reference." << endl;
  string& rStr = refToElement(inventory, 1);
  cout << "Sending the new reference to cout:" << endl;
  cout << rStr << endl << endl;

  // copies a string object -- expensive assignment
  cout << "Assigning the returned reference to a string object." << endl;
  string str = refToElement(inventory, 2);
  cout << "Sending the new string object to cout:" << endl;
  cout << str << endl << endl;

  // altering the string object through a returned reference
  cout << "Altering an object through a returned reference." << endl;
  rStr = "Healing Potion";
  cout << "Sending the altered object to cout:" << endl;
  cout << inventory[1] << endl;

  return 0;
}

string& refToElement(vector<string>& vec, int i) {
  return vec[i];
}
