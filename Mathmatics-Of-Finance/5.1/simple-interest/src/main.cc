#include "simple.h"

using namespace std;

void
legacyApi(Simple *ss)
{
  cout << "Legacy API: " << endl;
  ss->configuration();
}

void ptrConfig()
{
  unique_ptr<Simple> ptrConf(new Simple());
  ptrConf->randomMsg();
}

void
smartPtr()
{
  unique_ptr<Simple> ptrLargObj(new Simple(33));

  ptrLargObj->javelin();

  /* pass a raw pointer to a legacy api */
  legacyApi(ptrLargObj.get());

  /* free the memory before we exit the function block */
  ptrLargObj.reset();
}

int main(int argc, char **argv)
{
  smartPtr();
  /*
  Simple simple;
  Simple *ptrSimple = new Simple;

  unique_ptr<Simple> ptr(new Simple(3));

  cout << "SHOW THE DEFINITION" << endl;
  ptr->greetings();

  simple.show_definition();
  simple.show_formula();

  Simple simple_one(45);
  Simple simple_two(45, 55);

  cout << "show_forumla again: " << endl;

  ptrSimple->show_formula();

  delete ptrSimple;

  */

  return 0;
}
