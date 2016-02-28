/**
 * header.h
 * Contributors:
 *  * Jens Ackou
 * Description:
 *  Collection of functions for the terminal demo program
 */

#include <iostream>
#include <vector>
#include "books/beginning-cpp-through-game-programming-third-edition/include.h"

bool loop = true;

// Check if user enters a valid Integer
int validInput()
{
  int x;
  std::cin >> x;

  while (std::cin.fail())
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
    std::cin >> x;
  }
  return x;
}

// Print a friendly introduction
void introduction() {
  using namespace std;

  cout << "/**";
  cout << " * Welcome to my C++ Exercise and Reference collection !" << endl;
  cout << " */" << endl << std::endl;
}

// Pick an option by entering an integer value
int choice() {
  int input;
  std::cout << std::endl << ":: ";

  input = validInput();
  return input;
}

// Clear up the screen by spamming newlines
void clear() {
  for (int i = 0; i < 100; i++) {
    std::cout << std::endl;
  }
}

// Pause the terminal by asking for user input
// (need an alternative so I don't need to ask for any input)
void pauseTerminal() {
  int pause = 0;
  std::cout << std::endl << "Type anything and press ENTER to continue ...";
  std::cin >> pause;
}

// Display all exercises to pick from
// (I have no more flexible way of doing this at the moment)
void menu()  {
  int chapter  = 1;
  int exercise = 1;

  // std::vector < std::vector < char const * >> libVector
  for (auto i1 = book1.begin(); i1 != book1.end(); ++i1)
  {
    std::cout << "Chapter " << chapter << std::endl;
    std::cout << "----------" << std::endl;

    for (auto i2 = i1->begin(); i2 != i1->end(); ++i2)
    {
      std::cout << "[" << exercise << "] " << *i2 << std::endl;
      exercise++;
    }
    std::cout << std::endl;
    chapter++;
  }
}

// Run the selected application
void initApplication(int choice)
{
  clear();
  Application *app;

  switch (choice) {
    {
    // Beginning-cpp-through-game-programming-third-edition
    // Chapter-1
    case 1:

      app = new GameOver();
      break;

    case 2:

      app = new GameOver2();
      break;

    case 3:

      app = new ExpensiveCalculator();
      break;

    case 4:

      app = new GameStats();
      break;

    case 5:

      app = new GameStats2();
      break;

    case 6:

      app = new GameStats3();
      break;

    case 7:

      app = new LostFortune();
      break;

    case 8:

      app = new EndLostFortune();
      break;

    case 9:

      app = new ScoreRater();
      break;
    }
  }

  app->run();
}
