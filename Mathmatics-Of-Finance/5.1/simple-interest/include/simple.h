#pragma once

#include <iostream>

class Simple
{
  public:
    void show_definition();
    void show_formula();
    //void calculateInterest(const double& amount);
    Simple();
    Simple(int);
    Simple(int, int);
    ~Simple();

  private:
    int pv;
    int interest;
    int rate;
    int t;
};

/* By default all members of a class is Private
 * */
