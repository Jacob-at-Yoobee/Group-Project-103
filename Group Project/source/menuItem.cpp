#include "../headers/menuItem.h"
using namespace std;

int MenuItem::execute()
{
  cout << "MenuItem:" << endl;

  int choice = 0;

  cout << "Enter a number: ";
  cin >> choice;

  switch (choice)
  {
  case 1:
    cout << "You chose 1" << endl;
    break;
  case 2:
    cout << "You chose 2" << endl;
    break;

  default:
    cout << "You did not choose 1 or 2" << endl;
    break;
  }

  return 0;
}