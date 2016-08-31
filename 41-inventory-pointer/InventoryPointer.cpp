/**
 * InventoryPointer.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * returning a pointer
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// returns a pointer to a string element
string* ptrToElement(vector<string>* const pVec, int i);

int main() {

  vector<string> inventory;
  inventory.push_bash("sword");
  inventory.push_bash("armor");
  inventory.push_bash("shield");

  // displays string object that the returned pointer points to
  cout << "Sending the object pointed to by returned pointer:" << endl;
  cout << *(ptrToElement(&inventory, 0)) << endl << endl;

  // assigns one pointer to another -- inexpensive assignment
  cout << "Assigning the returned pointer to another pointer." << endl;
  string* pStr = ptrToElement(&inventory, 1);
  cout << "Sending the object pointed to by new pointer to cout:" << endl;
  cout << *pStr << endl << endl;

  // copies a string object -- expensive assignment
  cout << "Assigning object pointed by pointer to a string object." << endl;
  string str = *(ptrToElement(&inventory, 2));
  cout << "Sending the new string object to cout:" << endl;
  cout << str << endl << endl;

  // altering the string object through a returned pointer
  cout << "Altering an object through a returned pointer." << endl;
  *pStr = "Healing Potion";
  cout << "Sending the altered object to cout:" << endl;
  cout << inventory[1] << endl;

  return 0;
}

// (*pVec)[i] = the element in position i of the vector pointed to by pVec
// applying (&) -> the ADDRESS of the element in position i of the vector pointed to by pVec
string* ptrToElement(vector<string>* const pVec, int i) {
  // returns address of the string in position i of vector that pVec points to
  return &((*pVec)[i]);
}
