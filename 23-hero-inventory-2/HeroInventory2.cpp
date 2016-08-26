/**
 * HeroInventory2.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * demonstrates iterators
 */

#include <iostream>
#include <string>
#include <vector>

int main() {
  using namespace std;

  // Create a vector of strings and push back 3 items
  vector<string> inventory;
  inventory.push_back("sword");
  inventory.push_back("armor");
  inventory.push_back("shield");

  // Iterators identify a particular element
  // in a particular container and can move allong with arithmetic operators
  vector<string>::iterator myIterator;

  // A constant iterator disable you changing the value it refers to
  vector<string>::const_iterator iter;

  // List all items by moving our iterator each loop
  cout << "Your items:" << endl;
  for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
    cout << *iter << endl;
  }

  // Move the iterator to the first item and change the value
  // by dereferencing it first
  cout << endl << "You trade your sword for a battle axe.";
  myIterator = inventory.begin();
  *myIterator = "battle axe";
  cout << "Your items:" << endl;
  for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
    cout << *iter << endl;
  }

  // 2 ways you can operate on an iterator
  cout << endl << "The item name '" << *myIterator << "' has " << (*myIterator).size() << " letters in it." << endl;
  cout << endl << "The item name '" << *myIterator << "' has " << myIterator->size() << " letters in it." << endl;

  // Insert doesn't change a value but pushes a new one in at the specified location
  cout << endl << "You recover a crossbow from a slain enemy.";
  inventory.insert(inventory.begin(), "crossbow");
  cout << "Your items:" << endl;
  for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
    cout << *iter << endl;
  }

  // Move 2 places from the beginning and erase that item
  cout << endl << "Your armor is destroyed in a fierce battle.";
  inventory.erase((inventory.begin() + 2));
  cout << "Your items:" << endl;
  for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
    cout << *iter << endl;
  }

  return 0;
}
