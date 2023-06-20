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
		
		system("pause");
	}

  return 0;
}