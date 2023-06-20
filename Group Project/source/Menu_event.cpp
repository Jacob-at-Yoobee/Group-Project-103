#include "../headers/Menu_event.h"
#include "../headers/config.h"

using namespace std;

int MenuEvent::execute()
{
	system("CLS");
	cout << C.red("Upcoming Events:") << endl << endl;
	cout << C.brightBlue("21st June : Boys football on top feild 9am - 11am") << endl;
	cout << C.brightBlue("25th June : School band preformace at lunch time in hall") << endl;
	cout << C.brightBlue("28th June : School Closed for parent teacher interviews 9am - 2pm") << endl;
	system("pause");
	system("CLS");

	return 0;
}