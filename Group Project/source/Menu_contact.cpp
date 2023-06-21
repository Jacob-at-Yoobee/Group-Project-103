#include "../headers/Menu_contact.h"

int MenuContact::execute()
{
	utils.clear();
	cout << C.red("School Contact Details:") << endl
			 << endl;
	cout << C.brightBlue("Email : contact.us@yoobeecollege.co.nz") << endl;
	cout << C.brightBlue("Phone Number : 021 837 0394") << endl;
	utils.waitForKeyPress();

	return 0;
}