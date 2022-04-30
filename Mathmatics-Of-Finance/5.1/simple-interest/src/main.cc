#include "simple.h"

using namespace std;

int main(int argc, char **argv)
{
  Simple simple;

  simple.show_definition();
  simple.show_formula();

  /* need to create a new object with the passed in param */
  Simple simple1(45);

  return 0;
}
