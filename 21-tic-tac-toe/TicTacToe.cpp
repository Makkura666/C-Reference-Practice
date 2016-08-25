/**
 * TicTacToe.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * multidimentional arrays
 */

#include <iostream>
#include <string>

int main() {
  using namespace std;

  const int ROWS = 3;
  const int COLUMNS = 3;
  char board[ROWS][COLUMNS] = {{'O', 'X', 'O'},
                               {' ', 'X', 'X'},
                               {'X', 'O', 'O'} };

  cout << "Here's the tic-tac-toe board:" << endl;
  for (int i = 0; i < ROWS; ++i) {
    for (int j = 0; j < COLUMNS; ++j) {
      cout << board[i][j];
    }
    cout << endl;
  }

  cout << endl << "'X' moves to the empty location." << endl << endl;
  board[1][0] = 'X';

  cout << "Now the tic-tac-toe board is:" << endl;
  for (int i = 0; i < ROWS; ++i) {
    for (int j = 0; j < COLUMNS; ++j) {
      cout << board[i][j];
    }
    cout << endl;
  }

  cout << endl << "'X' wins!";

  return 0;
}
