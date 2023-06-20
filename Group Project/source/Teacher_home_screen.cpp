#include <iostream>

using namespace std;

int teacherMenu()
{
	string name;
	cout << "what is your name?\n";
	cin >> name;
	cout << "\n" << "Welcome " << name << "\n";
	int selection;
	while (selection != 2)
	{
		cout << "1) Student Records\n";
		cout << "2) Exit\n";
		cout << "Enter selection: ";
		cin >> selection;
		if (selection == 1)
		{
			studentRecords();
		}
		else if (selection == 2)
		{
			cout << "\nGoodbye!";
		}
		else
		{
			cout << "\nInvalid choice!\n";
		}
	}
}