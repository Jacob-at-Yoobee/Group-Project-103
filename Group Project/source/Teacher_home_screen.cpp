#include "../header/Teacher_home_screen.h"

int TeacherMenu::execute()
{
	StudentRecord StudentRecord;
	string name;
	cout << "What's your name?\n\n";
	name = getInput.getString();
	name[0] = toupper(name[0]);
	int selection;
	do
	{
		cout << "Welcome " << name << " to Teacher Homescreen\n\n";
		cout << "1) Student Records\n";
		cout << "2) Exit\n";
		cout << "Enter selection: ";
		selection = getInput.getNumber();

		if (selection == 1)
		{
			StudentRecord.execute();
		}
		else
		{
			cout << "\nInvalid choice!\n";
		}
	} while (selection != 2);
	cout << "\nGoodbye!";

	return 0;
}