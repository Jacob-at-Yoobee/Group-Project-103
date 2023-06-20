#include <iostream>

#include "headers/config.h"

#include "headers/Menu_login.h"
#include "headers/Menu_register.h"
#include "headers/Menu_event.h"
#include "headers/Menu_contact.h"

// vector<Item> db;

using namespace std;

// By Jacob Rosner, Arthur Werner and William Giles

void displayMenu()
{
    cout << "Menu:" << endl;
    if (currentlyLogedinUser.login.type == UserType::NullUser)
    {
        cout << "1. Login" << endl;
        cout << "2. Register" << endl;
    }
    else
    {
        cout << "1. Logout" << endl;
        cout << "2. " << endl;
    }
    cout << "3. Upcoming Events" << endl;
    cout << "4. Contact Details" << endl;
    cout << "5. Exit" << endl;
}

int main()
{

    Login NullLogin = {"", "", UserType::NullUser, ""};
    User NullUser = {NullLogin};
    db.push_back(NullUser);

    Login login1;
    User item1;

    login1.username = "admin";
    login1.password = "admin";
    login1.type = UserType::Admin;
    login1.id = "admin user";

    Login login2 = {"user", "user", UserType::Parent, "normal user"};

    item1.login = login1;

    User item2 = {login2};

    db.push_back(item1);
    db.push_back(item2);

    // db.push_back();

    int choice;

    MenuLogin MenuLogin;
    MenuRegister MenuRegister;
    MenuEvent MenuEvent;
    MenuContact MenuContact;

    do
    {

        Clear();

        displayMenu();
        cout << "Enter a number: ";
        choice = getInput.getNumber(C.Green);

        switch (choice)
        {
        case 1:
            if (currentlyLogedinUser.login.type == UserType::NullUser)
            {
                MenuLogin.execute();
            }
            else
            {
                currentlyLogedinUser = NullUser;
            }
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
