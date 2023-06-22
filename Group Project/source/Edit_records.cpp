#include <iostream>
#include <string>

using namespace std;

void editRecords()
{
	string name;
	int maths;
	int science;
	int writing;
	int reading;
	int others;
	string learningProgress;
	cout << "Enter the student's name: ";
	cin >> name;
	cout << "\nWhat is " << name << "'s score in maths out of 100? ";
	cin >> maths;
	cout << "\nWhat is " << name << "'s score in science out of 100? ";
	cin >> science;
	cout << "\nWhat is " << name << "'s score in writing out of 100? ";
	cin >> writing;
	cout << "\nWhat is " << name << "'s score in reading out of 100? ";
	cin >> reading;
	cout << "\nWhat is " << name << "'s score in other areas out of 100? ";
	cin >> others;
	cout << "\nHow is " << name << " doing in terms of learning? Answer with achieved, needs help or progressing ";
	getline(cin, learningProgress);
	if (learningProgress == "Achieved")
	{
		cout << "\nIt's good to hear that " << name << " is doing ok with their work\n";
	}
	else if (learningProgress == "Needs Help")
	{
		cout << "\n" << name << " seems to be struggling. Maybe you should explain the material more clearly\n";
	}
	else if (learningProgress == "Progressing")
	{
		cout << "\n" << name << " is trying hard. Keep supporting them\n";
	}
	else
	{
		cout << "\nInvalid Choice!\n";
		editRecords();
	}
}