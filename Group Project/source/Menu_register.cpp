#include "../headers/Menu_register.h"
#include "../headers/config.h"

using namespace std;

int MenuRegister::execute()
{
	int userOccupation;
	cout << C.blue("Occupation") << endl << "1)Teacher\n2)Parent";
	cin >> userOccupation;
	switch (userOccupation)
	{
	case 1:
		cout << "Teacher Registration" << endl << endl;
		cout << endl << "Full Name: ";

		cout << endl << "Gender: ";

		cout << endl << "Date of Birth: ";

		cout << endl << "Email: ";

		cout << endl << "Contact Number: ";

		cout << endl << "Classroom Number: ";

		cout << endl << "Teaching Year(eg: year 1): ";

		cout << endl << "Username: ";

		cout << endl << "Password: ";
		
		cout << endl;
		waitForKeyPress();
		Clear();
		break;
	case 2:
		cout << "Parent Registration" << endl << endl;
		cout << endl << "Full Name: ";

		cout << endl << "Gender: ";

		cout << endl << "Date of Birth: ";

		cout << endl << "Email: ";

		cout << endl << "Contact Number: ";

		cout << endl << "Child Full Name(s): ";

		cout << endl << "Child(s) Classroom Number: ";

		cout << endl << "Parent/Caregiver Emergency Contact Number: ";

		cout << endl << "Username: ";

		cout << endl << "Password: ";

		cout << endl;
		waitForKeyPress();
		Clear();
		break;
	}

  return 0;
}