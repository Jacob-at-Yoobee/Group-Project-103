#include "../headers/Teacher_home_screen.h"

int TeacherMenu::execute()
{
	string name;
	cout << "what is your name?\n";
	cin >> name;
	cout << "\n"
			 << "Welcome " << name << "\n";
	int selection;
	do
	{
		cin >> selection;
		cout << "1) Student Records\n";
		cout << "2) Exit\n";
		cout << "Enter selection: ";

		if (selection == 1)
		{
			// studentRecords();
		}
		else if (selection == 2)
		{
			cout << "\nGoodbye!";
		}
		else
		{
			cout << "\nInvalid choice!\n";
		}
	} while (selection != 2);

	return 0;
}