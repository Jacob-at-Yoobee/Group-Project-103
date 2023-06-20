#include <iostream>

#include "headers/config.h"

#include "headers/Menu_login.h"
#include "headers/Menu_register.h"
#include "headers/Menu_event.h"
#include "headers/Menu_contact.h"

using namespace std;

void displayMenu()
{
    cout << "Welcome to Yoobee's Info System" << endl << endl;
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
    MenuEvent MenuEvent;
    MenuContact MenuContact;

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
        case 3:
            MenuEvent.execute();
            break;
        case 4:
            MenuContact.execute();
            break;
        }

    } while (choice != 5);

    cout << C.brightRed("Exiting...") << "\n";
}
