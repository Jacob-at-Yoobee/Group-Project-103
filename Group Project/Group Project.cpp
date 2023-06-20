#include <iostream>

#include "headers/config.h"

#include "headers/Menu_login.h"
#include "headers/Menu_register.h"

using namespace std;

//By Jacob Rosner, Arthur Werner and William Giles

void displayMenu()
{
    cout << "Menu:" << endl;
    cout << "1. Login" << endl;
    cout << "2. Register" << endl;
    cout << "3. Upcoming Events" << endl;
    cout << "4. Contact Details" << endl;
    cout << "5. Exit" << endl;
}

int main()
{
    int choice;

    MenuLogin MenuLogin;
    MenuRegister MenuRegister;

    do
    {

        displayMenu();
        cout << "Enter a number: ";
        choice = getInput.getNumber(C.Green);

        switch (choice)
        {
        case 1:
            MenuLogin.execute();
            break;
        case 2:
            MenuRegister.execute();
            break;
        }

    } while (choice != 5);

    cout << C.brightRed("Exiting...") << "\n";
}
