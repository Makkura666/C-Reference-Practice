/**
 * ExpensiveCalculator.h
 * Contributors:
 *  * Jens Ackou
 * Description:
 * Some basic arithmetic operations
 */

#ifndef EXPENSIVECALCULATOR
#define EXPENSIVECALCULATOR

#include "../../../../application/Application.h"

class ExpensiveCalculator : public Application
{
public:

  ExpensiveCalculator();
  virtual int run() const;
};

#endif /* ifndef EXPENSIVECALCULATOR */
