/**
 * TicTacToe.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * plays the game tic-tac-toe against a human oponent
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// global constants
const char X = 'X';
const char O = 'O';
const char EMPTY = ' ';
// FIX Variable UNSUSED
//const char TIE = 'T';
const char NO_ONE = 'N';

// function prototypes
void instructions();
char askYesNo(string question);
int  askNumber(string question, int high, int low = 0);
char humanPiece();
char opponent(char piece);
void displayBoard(const vector<char>& board);
char winner(const vector<char>& board);
bool isLegal(const vector<char>& board, int move);
int  humanMove(const vector<char>& board, char human);
int  computerMove(vector<char>& board, char computer);
void announceWinner(char winner, char computer, char human);

int main() {
  int move;
  const int NUM_SQUARES = 9;
  vector<char> board(NUM_SQUARES, EMPTY);

  instructions();			
  char human = humanPiece();
  char computer = opponent(human);
  char turn = X;
  displayBoard(board);

  while (winner(board) == NO_ONE) {
    if (turn == human) {
      move = humanMove(board, human);
      board[move] = human;
    } else {
      move = computerMove(board, computer);
      board[move] = computer;
    }
    displayBoard(board);
    turn = opponent(turn);
  }

  announceWinner(winner(board), computer, human);

  return 0;
}

void instructions() {
  cout << "Welcome to the ultimate man-machine showdown: Tic-Tac-Toe." << endl;
  cout << "-- where human brain is pit against silicon processor" << endl << endl;

  cout << "Make your move known by entering a number, 0 - 8. The number" << endl;
  cout << "corresponds to the desired board position, as illustrated:" << endl << endl;

  cout << "     0 | 1 | 2" << endl;
  cout << "     ---------" << endl;
  cout << "     3 | 4 | 5" << endl;
  cout << "     ---------" << endl;
  cout << "     6 | 7 | 8" << endl << endl;

  cout << "Prepare yourself, human. The battle is about to begin." << endl << endl;
}

char askYesNo(string question) {
  char response;
  do {
    cout << question << " (y/n): ";
    cin >> response;
  } while (response != 'y' && response != 'n');

  return response;
}

int askNumber(string question, int high, int low) {
  int number;
  do {
    cout << question << " (" << low << " - " << high << "): ";
    cin >> number;
  } while (number > high || number < low);

  return number;
}

char humanPiece() {
  char go_first = askYesNo("Do you require the first move?");
  if (go_first) {
    cout << endl << "Then take the first move. You will need it." << endl;
    return X;
  } else {
    cout << endl << "Your bravery will be your undoing... I will go first." << endl;
    return O;
  }
}

char opponent(char piece) {
  if (piece == X) {
    return O;
  } else {
    return X;
  }
}

void displayBoard(const vector<char>& board) {
  cout << endl << board[0] << " | " << board[1] << " | " << board[2];
  cout << endl << "--------";
  cout << endl << board[3] << " | " << board[4] << " | " << board[5];
  cout << endl << "--------";
  cout << endl << board[6] << " | " << board[7] << " | " << board[8];
  cout << endl << endl;
}

char winner(const vector<char>& board) {
  // al possible winning rows
  const int WINNING_ROWS[8][3] = { {0, 1, 2},
                                   {3, 4, 5},
                                   {6, 7, 8},
                                   {0, 3, 6},
                                   {1, 4, 7},
                                   {2, 5, 8},
                                   {0, 4, 8},
                                   {2, 4, 6} };
  const int TOTAL_ROWS = 8;

  // If any winning row has three values that are the same (and not EMPTY),
  // then we have a winner
  for(int row = 0; row < TOTAL_ROWS; ++row) {
    if ( (board[WINNING_ROWS[row][0]] != EMPTY) &&
         (board[WINNING_ROWS[row][0]] == board[WINNING_ROWS[row][1]]) &&
         (board[WINNING_ROWS[row][1]] == board[WINNING_ROWS[row][2]]) ) {
           return board[WINNING_ROWS[row][0]];
         }
  }
    return NO_ONE;
}

inline bool isLegal(int move, const vector<char>& board) {
  return (board[move] == EMPTY);
}

int humanMove(const vector<char>& board, char human) {
  int move = askNumber("Where will you move?", (board.size() - 1));
  while (!isLegal(move, board)) {
    cout << endl << "That square is already occupied, foolish human." << endl;
    move = askNumber("Where will you move?", (board.size() - 1));
  }
  cout << "Fine..." << endl;

  return move;
}

int computerMove(vector<char>& board, char computer) {
  unsigned int move = 0;
  bool found = false;

  // if computer can win on next move, make that move
  while (!found && move < board.size()) {
    if(isLegal(move, board)) {
      board[move] = computer;
      found = winner(board) == computer;
      board[move] = EMPTY;
    }

    if(!found) {
      ++move;
    }
  }

  // otherwise, if human can win that's the next move
  if(!found) {
    move = 0;
    char human = opponent(computer);

    while(!found && move < board.size()) {
      if (isLegal(move, board)) {
        board[move] = human;
        found = winner(board) == human;
        board[move] = EMPTY;
      }

      if (!found) {
        ++move;
      }
    }
  }

  // otherwise, moving to the best open square is the move to make
  if (!found) {
    move = 0;
    unsigned int i = 0;

    const int BEST_MOVES[] = {4, 0, 2, 6, 8, 1, 3, 5, 7};
    // pick best open square
    while (!found && i < board.size()) {
      move = BEST_MOVES[i];
      if (isLegal(move, board)) {
        found = true;
      }

      ++i;
    }
  }
    return 0;
}

void announceWinner(char winner, char computer, char human) {
  if (winner == computer) {
    cout << winner << "'s won!" << endl;
    cout << "As I predicted, human, I am triumphant once more -- proof" << endl;
    cout << "that computers are superior to humans in all regards." << endl;
  }

  else if(winner == human) {
    cout << winner << "'s won!" << endl;
    cout << "No, no! It cannot be! Somehow you tricked me, human." << endl;
    cout << "But never again! I, the computer, so swear it!" << endl;
  }

  else {
    cout << "It's a tie!" << endl;
    cout << "You were most lucky, human, and somehow managed to tie me." << endl;
    cout << "Celebrate... for this is the best you will achieve." << endl;
  }
}
