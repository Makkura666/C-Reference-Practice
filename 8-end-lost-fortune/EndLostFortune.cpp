/**
 * EndLostFortune.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * Closure of chapter 1
 */

#include <iostream>

int main()
{
  std::cout << "[APPLICATION]: Question 1: " << std::endl <<
    "Create a list of six legal variable names - three good and three bad choices."
            << std::endl;

  std::cout << "GOOD" << std::endl << "----" << std::endl;
  std::cout << "playerName - nStudentScore - SCOREMULTIPLIER" << std::endl;
  std::cout << "(Short, descriptive, consistent)" << std::endl;

  std::cout << std::endl << "BAD" << std::endl << "---" << std::endl;
  std::cout << "x - my name - randomIntegerGeneratedForRandomPurpose" <<
    std::endl;
  std::cout << "(undescriptive, illegal characters, too long)" << std::endl <<
    std::endl;


  std::cout << "[APPLICATION]: Question 2: " << std::endl <<
    "What's displayed by each line in the following code snippet? Explain each result."
            << std::endl;

  std::cout << "Seven divided by three is " << 7 / 3 << std::endl;
  std::cout <<
  "(Integers being divided by integers will result in an integer.)" << std::endl;
  std::cout << "Seven divided by three is " << 7.0 / 3 << std::endl;
  std::cout << "Seven divided by three is " << 7.0 / 3.0 << std::endl;
  std::cout <<
  "(As soon as the calculation involves a single decimal value the result will also be a decimal value.)"
            << std::endl << std::endl;

  std::cout << "[APPLICATION]: Question 3: " << std::endl <<
    "Write a program that gets three game scores from the user and displays the average"
            << std::endl;

  int score1;
  int score2;
  int score3;
  std::cout << "Enter 3 game scores to get the average:";
  std::cin >> score1;
  std::cin >> score2;
  std::cin >> score3;
  std::cout << std::endl << "The average of your input is: " <<
  ((score1 + score2 + score3) / 3) << std::endl;

  return 0;
}
