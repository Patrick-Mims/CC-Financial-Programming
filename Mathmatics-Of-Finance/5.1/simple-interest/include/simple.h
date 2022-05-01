#pragma once

#include <iostream>
#include <memory>

class Simple
{
  public:
    void configuration();
    void greetings();
    void javelin();
    void randomMsg();
    void show_definition();
    void show_formula();

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
