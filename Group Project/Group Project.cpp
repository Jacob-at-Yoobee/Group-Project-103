// Group Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "headers/cliTools.h"

#include "headers/login.h"
#include "headers/register.h"

Color C;
GetInput getInput;

using namespace std;

void displayMenu()
{
    cout << "Menu:" << endl;
    cout << "1. Login" << endl;
    cout << "2. Register" << endl;
    cout << "3. Exit" << endl;
}

int main()
{
    int choice;

    Login login;
    Register registerUser;

    do
    {

        displayMenu();
        cout << "Enter a number: ";
        choice = getInput.getNumber(C.Green);

        switch (choice)
        {
        case 1:
            login.execute();
            break;
        case 2:
            registerUser.execute();
            break;
        }

    } while (choice != 3);

    cout << C.brightRed("Exiting...") << "\n";
}
