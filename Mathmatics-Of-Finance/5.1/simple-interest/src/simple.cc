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

void Simple::greetings()
{
    cout << "Welcome to FINANCE - greetings()" << endl;
}

void Simple::javelin()
{
    cout << "The Insane Engineering of the Javelin" << endl;
}

void Simple::randomMsg()
{
  cout << "This is a random msg: " << endl;
}

void Simple::configuration()
{
    cout << "This is the configuration executing..." << endl;
}

Simple::Simple()
{
  cout << "Default Constructor" << endl;
}

Simple::Simple(int a)
{
  pv = a;
  cout << "Default Constructor one param: " << pv << endl;
}

Simple::Simple(int a, int b)
{
  cout << "Default Constructor two params: " << (a + b) << endl;
}

Simple::~Simple()
{
  cout << "Destructor" << endl;
}

