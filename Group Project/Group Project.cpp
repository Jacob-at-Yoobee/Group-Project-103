#include <iostream>
#include "headers/menuItem.h"
using namespace std;

void displayMenu()
{
    cout << "Menu:" << std::endl;
    cout << "1. run menuItem test" << std::endl;
}

int main()
{
    // std::cout << "Hello World!\n";

    MenuItem menuItem;

    int choice = 0;

    displayMenu();
    cout << "Enter a option: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        menuItem.execute();
        break;
    }
}