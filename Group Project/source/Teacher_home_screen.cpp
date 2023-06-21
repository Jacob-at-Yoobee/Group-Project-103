#include "../header/Teacher_home_screen.h"

int TeacherMenu::execute()
{
	StudentRecord StudentRecord;
	string name;
	cout << "what is your name?\n";
	name = getInput.getString();
	cout << "\n"
			 << "Welcome " << name << "\n";
	int selection;
	do
	{
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