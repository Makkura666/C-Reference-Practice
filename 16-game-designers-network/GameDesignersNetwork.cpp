/**
 * GameDesignersNetwork.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * if, else if, else statements
 */

#include <iostream>
#include <string>

int main() {
  using namespace std;

  string username;
  string password;
  bool success;

  cout << endl << "Game designer network !" << endl;

  do {
    cout << endl << "Username: ";
    cin >> username;

    cout << endl << "Password: ";
    cin >> password;

    if (username == "S.Meier" && password == "civilization") {
      cout << endl << "Hey, Sid.";
      success = true;
    }

    else if (username == "S.Miyamoto" && password == "mariobros") {
      cout << endl << "What's up, Shigeru?";
      success = true;
    }

    else if (username == "W.Wright" && password == "thesims") {
      cout << endl << "How goes it, Will?";
      success = true;
    }

    else if (username == "guest" && password == "guest") {
      cout << endl << "Welcome, guest.";
      success = true;
    }

    else {
      cout << endl << "Your login failed.";
      success = false;
    }
  } while (!success);

  return 0;
}
