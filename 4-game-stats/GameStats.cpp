/**
 * GameStats.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * Declaring and initializing variables
 */

#include <iostream>

int main()
{
  int score;
  double distance;
  char   playAgain;
  bool   shieldsUp;

  short lives, aliensKilled;

  score        = 0;
  distance     = 1200.76;
  playAgain    = 'y';
  shieldsUp    = true;
  lives        = 3;
  aliensKilled = 10;

  double engineTemp = 6572.89;

  std::cout << "[APPLICATION] score: " << score << std::endl;
  std::cout << "[APPLICATION] distance: " << distance << std::endl;
  std::cout << "[APPLICATION] playAgain: " << playAgain << std::endl;
  std::cout << "[APPLICATION] shieldsUp: " << shieldsUp << std::endl;
  std::cout << "[APPLICATION] lives: " << lives << std::endl;
  std::cout << "[APPLICATION] aliensKilled: " << aliensKilled << std::endl;
  std::cout << "[APPLICATION] engineTemp: " << engineTemp << std::endl <<
    std::endl;

  int fuel;
  std::cout << "[APPLICATION] How much do you want to gas up?: ";
  std::cin >> fuel;
  std::cout << "[APPLICATION] fuel: " << fuel << std::endl << std::endl;

  typedef unsigned short int ushort;
  ushort bonus = 10;
  std::cout << "[APPLICATION] bonus: " << bonus << std::endl;

  return 0;
}

/*
   Commonly Used Types
   -------------------
   Type                  Values
   ----                  ------
   short int             -32,768 to 32,767
   unsigned short int    0 to 65,535
   int                   -2,147,483,648 to 2,147,483,647
   unsigned int          0 to 4,294,967,295
   long int              -2,147,483,648 to 2,147,483,647
   unsigned long int     0 to 4,294,967,295
   float                 3.4E +/- 38 (seven significant digits)
   double                1.7E +/- 308 (15  significant digits)
   long double           1.7E +/- 308 (15  significant digits)
   char                  256 character values
   bool                  true or false
   ! range of values is based on compiler !
 */
