#include "../header/Menu_register.h"

int MenuRegister::execute()
{
	int userOccupation;
	cout << ("Occupation") << endl
			 << "1) Teacher" << endl
			 << "2) Parent: ";

	userOccupation = getInput.getNumber();

	string genderString;

	string fullName;
	Gender gender;
	string dob;
	string email;
	string contactNumber;
	string childFullName;
	string childClassroomNumber;
	string emergencyContactNumber;
	string username;
	string password;

	switch (userOccupation)
	{
	case 1:
		cout << "Teacher Registration" << endl
				 << endl;
		cout << endl
				 << "Full Name: ";

		fullName = getInput.getString();
		cout << endl
				 << "Gender(male/female): ";
		genderString = getInput.getString();
		if (genderString.find("female") != std::string::npos)
			gender = Female;
		else
			gender = Male;

		cout
				<< endl
				<< "Date of Birth: ";
		dob = getInput.getString();

		cout << endl
				 << "Email: ";
		email = getInput.getString();

		cout << endl
				 << "Contact Number: ";
		contactNumber = getInput.getString();

		cout << endl
				 << "Classroom Number: ";
		childClassroomNumber = getInput.getString();

		cout << endl
				 << "Teaching Year(eg: year 1): ";

		cout << endl
				 << "Username: ";
		username = getInput.getString();

		cout << endl
				 << "Password: ";
		password = getInput.getString();

		cout << endl;
		utils.waitForKeyPress();
		utils.clear();
		break;
	case 2:
		cout << "Parent Registration" << endl
				 << endl;
		cout << endl
				 << "Full Name: ";

		cout << endl
				 << "Gender: ";

		cout << endl
				 << "Date of Birth: ";

		cout << endl
				 << "Email: ";

		cout << endl
				 << "Contact Number: ";

		cout << endl
				 << "Child Full Name(s): ";

		cout << endl
				 << "Child(s) Classroom Number: ";

		cout << endl
				 << "Parent/Caregiver Emergency Contact Number: ";

		cout << endl
				 << "Username: ";

		cout << endl
				 << "Password: ";

		cout << endl;
		utils.waitForKeyPress();
		utils.clear();
		break;
	}

	return 0;
}