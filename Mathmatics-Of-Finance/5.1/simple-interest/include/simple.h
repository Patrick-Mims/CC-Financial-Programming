#ifndef SIMPLE_INTEREST
#define SIMPLE_INTEREST

#include <iostream>

class Simple
{
  public:
    SimpleInterest(double rate);
    void calculateInterest(const double& amount);
    ~SimpleInterest();

  private:
    double m_rate;
    double m_amount;
};

#endif

/* By default all members of a class is Private
 *
 * */
