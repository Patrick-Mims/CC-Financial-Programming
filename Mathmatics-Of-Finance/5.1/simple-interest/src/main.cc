#include <iostream>
#include <iomanip>

#include "simple.h"

using namespace std;

void calculate()
{
  int PV = 0, i = 0, r = 0, t = 0;

  cout << "Enter PV (Present Value): ";
  cin >> PV;

  cout << "Rate: ";
  cin >> r;

  cout << "Time: ";
  cin >> t;

  i = PV((r)(t));

  cout << "Interest: " << i << endl;
}

void definition()
{
  cout << "Simple Interest and Discount\nInterest is the fee paid to use someone else's money. \nInterest on loans of a year or less is frequently calculated as simple interest, which is paid only on the amount borrowed or invested and not on past interest.\n";

}

void formula()
{
  cout << "Simple Interest" << endl;
  cout << "The simple interst (I) on (PV) dollars ar a rate of interest (r) per year for (t) years is:\n t = PVrt" << endl;
}

void menu()
{
  int choice = 0;

  cout << "1. Definition\n2. Formula" << endl;
  cin >> choice;

  switch(choice)
  {
    case 1: definition();
            break;
    case 2: formula();
            break;
    default:
            cout << "That choice is out of range" << endl;
            choice = choice - 1;
  }
}

/* pass by reference */
void simple_test(const Simple& simpTest)
{
    cout << "simpTest: " << << endl;
}

int main(int argc, char **argv)
{
  Simple simple;
  cout << "Financial Programming Series\n";
  int cnt = 0;

  /*
     do {
     menu();
     cnt = cnt + 1;
     } while(cnt < 2);
     */

  calculate();

  return 0;
}
