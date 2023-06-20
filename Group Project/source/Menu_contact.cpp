#include "../headers/Menu_contact.h"
#include "../headers/config.h"

using namespace std;

int MenuContact::execute()
{
	system("CLS");
	cout << C.red("School Contact Details:") << endl << endl;
	cout << C.brightBlue("Email : contact.us@yoobeecollege.co.nz") << endl;
	cout << C.brightBlue("Phone Number : 021 837 0394") << endl;
	system("pause");
	system("CLS");

	return 0;
}