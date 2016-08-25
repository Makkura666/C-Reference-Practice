/**
 * HeroInventory2.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * demonstrates vectors
 */

#include <iostream>
#include <string>
#include <vector>

int main() {
  using namespace std;

  vector<string> inventory;
  inventory.push_back("sword");
  inventory.push_back("armor");
  inventory.push_back("shield");

  cout << "You have " << inventory.size() << " items." << endl;

  cout << endl << "Your items:" << endl;
  for (unsigned int i = 0; i < inventory.size(); ++i) {
    cout << inventory[i] << endl;
  }

  cout << endl << "You trade your sword for a battle axe.";
  inventory[0] = "battle axe";
  cout << endl << "Your items:" << endl;
  for (unsigned int i = 0; i < inventory.size(); ++i) {
    cout << inventory[i] << endl;
  }

  cout << endl << "The item name '" << inventory[0] << "' has " << inventory[0].size() << " letters in it." << endl;

  cout << endl << "Your shield is destroyed in a fierce battle.";
  inventory.pop_back();
  cout << endl << "Your items:" << endl;
  cout << endl << "Your items:" << endl;
  for (unsigned int i = 0; i < inventory.size(); ++i) {
    cout << inventory[i] << endl;
  }

  cout << endl << "You were robbed of all your possessions by a thief.";
  inventory.clear();
  if(inventory.empty()) {
    cout << endl << "You have nothing." << endl;
  } else {
    cout << endl << "You have at least one item." << endl;
  }

  return 0;
}
