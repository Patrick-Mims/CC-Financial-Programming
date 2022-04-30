#include "simple.h"

using namespace std;

void Simple::show_definition()
{
  cout << "Simple Interest and Discount\nInterest is the fee paid to use someone else's money. \nInterest on loans of a year or less is frequently calculated as simple interest, which is paid only on the amount borrowed or invested and not on past interest.\n";
}

void Simple::show_formula()
{
  cout << "The simple interst (I) on (PV) dollars ar a rate of interest (r) per year for (t) years is:\n t = PVrt" << endl;
}

Simple::Simple()
{
  cout << "Default Constructor" << endl;
}

Simple::~Simple()
{
  cout << "Destructor" << endl;
}

