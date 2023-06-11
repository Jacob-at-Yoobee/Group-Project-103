
#include <iostream>

#include "menu/login.h"

using namespace std;

int main()
{
  int option;

  do
  {

    cout << "num:" << endl;
    cin >> option;

    switch (option)
    {
    case 1:
      Login();
      break;
    }
  } while (option != 0);

  return 0;
}