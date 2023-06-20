#include "../headers/Menu_contact.h"
#include "../headers/config.h"

using namespace std;

int MenuContact::execute()
{
	Clear();
	cout << C.red("School Contact Details:") << endl
			 << endl;
	cout << C.brightBlue("Email : contact.us@yoobeecollege.co.nz") << endl;
	cout << C.brightBlue("Phone Number : 021 837 0394") << endl;
	waitForKeyPress();

	return 0;
}