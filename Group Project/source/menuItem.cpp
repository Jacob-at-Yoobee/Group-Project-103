#include "../headers/menuItem.h"

int MenuItem::execute()
{
  std::cout << "MenuItem:" << std::endl;

  int choice = 0;

  std::cout << "Enter a number: ";
  std::cin >> choice;

  switch (choice)
  {
  case 1:
    std::cout << "You chose 1" << std::endl;
    break;
  case 2:
    std::cout << "You chose 2" << std::endl;
    break;

  default:
    std::cout << "You did not choose 1 or 2" << std::endl;
    break;
  }

  return 0;
}