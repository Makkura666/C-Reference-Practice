/**
 * ExpensiveCalculator.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * Some basic arithmetic operations
 */

#include "ExpensiveCalculator.h"
#include <iostream>

ExpensiveCalculator::ExpensiveCalculator()
{}

int ExpensiveCalculator::run() const
{
  Application::intro("ExpensiveCalculator", "Some basic arithmetic operations");
  std::cout << "[APPLICATION] 7 + 3 = " << 7 + 3 << std::endl;
  std::cout << "[APPLICATION] 7 - 3 = " << 7 - 3 << std::endl;
  std::cout << "[APPLICATION] 7 * 3 = " << 7 * 3 << std::endl;

  // The result must be an integer
  std::cout << "[APPLICATION] 7 / 3 = " << 7 / 3 << std::endl;
  // This result will be more accurate
  std::cout << "[APPLICATION] 7.0 / 3.0 = " << 7.0 / 3.0 << std::endl;

  // Returns the remainder of the division
  std::cout << "[APPLICATION] 7 % 3 = " << 7 % 3 << std::endl;

  std::cout << "[APPLICATION] 7 + 3 * 5 = " << 7 + 3 * 5 << std::endl;
  std::cout << "[APPLICATION] (7 + 3) * 5 = " << (7 + 3) * 5 << std::endl;

  return 0;
}

/*
  C++ Operator Precedence
  -----------------------
  Precedence Level   Operator  Description
  17                  ::        Scope resolution
  16                  ->        Indirect member selection
  16                  .         Member selection
  16                  [ ]       Array index
  16                  ( )       Function call
  16                  sizeof    Size in bytes
  15                  ++        Increment
  15                  --        Decrement
  15                  <tilde>   Bitwise NOT
  15                  !         Logical NOT
  15                  +         Unary plus
  15                  -         Unary minus
  15                  *         Dereference
  15                  &         Address-of
  15                  ( )       Cast
  15                  new       Acquire memory on the heap
  15                  delete    Release memory on the heap
  14                  ->*       Indirect member pointer selector
  14                  .*        Member pointer selector
  13                  *         Multiplication
  13                  /         Division
  13                  %         Modulus
  12                  +         Addition
  12                  -         Subtraction
  11                  <<        Bitwise shift left
  11                  >>        Bitwise shift right
  10                  <         Less than
  10                  <=        Less than or equal to
  10                  >         Greater than
  10                  >=        Greater than or equal to
   9                  ==        Equal to
   9                  !=        Not Equal to
   8                  &         Bitwise AND

   7                  ^         Bitwise XOR
   6                  |         Bitwise OR
   5                  &&        Logical AND
   4                  ||        Logical OR
   3                  ?:        Conditional operator
   2                  =         Assignment
   2                  *=        Multiply and assign
   2                  /=        Divide and assign
   2                  %=        Modulus and assign
   2                  +=        Add and assign
   2                  -=        Subtract and assign
   2                  <<=       Bitwise shift left and assign
   2                  >>=       Bitwise shift right and assign
   2                  &=        Bitwise AND and assign
   2                  |=        Bitwise OR and assign
   2                  ^=        Bitwise XOR and assign
   1                  ,         Comma operator
*/
