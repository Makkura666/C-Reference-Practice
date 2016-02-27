/**
 * GameStats2.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * Arithmmetic operations with variables
 */

#include "GameStats2.h"
#include <iostream>

GameStats2::GameStats2()
{}

int GameStats2::run() const
{
  Application::intro("GameStats2", "Arithmmetic operations with variables");
  unsigned int score = 5000;
  std::cout << "[APPLICATION] score: " << score << std::endl;

  // altering the value of a variable
  score = score + 100;
  std::cout << "[APPLICATION] score: " << score << std::endl << std::endl;

  // incrrement operators
  int lives = 3;
  ++lives;
  std::cout << "[APPLICATION] lives: " << lives << std::endl;

  lives = 3;
  lives++;
  std::cout << "[APPLICATION] lives: " << lives << std::endl << std::endl;

  lives = 3;
  int bonus = ++lives * 10;
  std::cout << "[APPLICATION] lives(prefix), bonus: " << lives << ", " << bonus <<
    std::endl;

  lives = 3;
  bonus = lives++ *10;
  std::cout << "[APPLICATION] lives(postfix), bonus: " << lives << ", " <<
  bonus <<
    std::endl << std::endl;

  // integer wrap around
  score = 4294967295;
  std::cout << "[APPLICATION] score: " << score << std::endl;
  ++score;
  std::cout << "[APPLICATION] score(wrapped around): " << score << std::endl;

  return 0;
}

/*
   Combined Assignment operators
   -----------------------------
   Operator  Example   Equivalent To
   +=        x += 5;   x = x + 5;
   -=        x -= 5;   x = x - 5;
 *=        x *= 5;   x = x * 5;
   /=        x /= 5;   x = x / 5;
   %=        x %= 5;   x = x % 5;
 */
