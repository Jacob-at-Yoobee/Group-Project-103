#include "../header/Menu_contact.h"

int MenuContact::execute()
{
	utils.clear();
	cout << ("School Contact Details:") << endl
			 << endl;
	cout << ("Email : contact.us@yoobeecollege.co.nz") << endl;
	cout << ("Phone Number : 021 837 0394") << endl;
	utils.waitForKeyPress();

	return 0;
}