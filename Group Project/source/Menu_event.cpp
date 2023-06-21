#include "../headers/Menu_event.h"

int MenuEvent::execute()
{
	utils.clear();

	cout << C.red("Upcoming Events:") << endl
			 << endl;
	cout << C.brightBlue("21st June : Boys football on top feild 9am - 11am") << endl;
	cout << C.brightBlue("25th June : School band preformace at lunch time in hall") << endl;
	cout << C.brightBlue("28th June : School Closed for parent teacher interviews 9am - 2pm") << endl;
	cout << C.brightBlue("5th July: Australian rapper Hooligan Hefs will be performing a concert at lunchtime on the quad. He will also debut a new song") << endl;
	utils.waitForKeyPress();

	return 0;
}