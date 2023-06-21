#include "../header/Menu_event.h"

int MenuEvent::execute()
{
	utils.clear();

	cout << ("Upcoming Events:") << endl
			 << endl;
	cout << ("21st June : Boys football on top feild 9am - 11am") << endl;
	cout << ("25th June : School band preformace at lunch time in hall") << endl;
	cout << ("28th June : School Closed for parent teacher interviews 9am - 2pm") << endl;
	cout << ("5th July: Australian rapper Hooligan Hefs will be performing a concert at lunchtime on the quad. He will also debut a new song") << endl;
	utils.waitForKeyPress();

	return 0;
}