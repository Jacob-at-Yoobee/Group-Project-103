#include <iostream>
#include <string>
#include "../header/Edit_records.h"


using namespace std;

int editRecords()
{
	string name;
	int maths;
	int science;
	int writing;
	int reading;
	int others;
	string learningProgress;
	cout << "Enter the student's name: ";
	name = getInput.getString();
	cout << "\nWhat is " << name << "'s score in maths out of 100? ";
	maths = getInput.getNumber();
	cout << "\nWhat is " << name << "'s score in science out of 100? ";
	science = getInput.getNumber();
	cout << "\nWhat is " << name << "'s score in writing out of 100? ";
	writing = getInput.getNumber();
	cout << "\nWhat is " << name << "'s score in reading out of 100? ";
	reading = getInput.getNumber();
	cout << "\nWhat is " << name << "'s score in other areas out of 100? ";
	others = getInput.getNumber();
	cout << "\nHow is " << name << " doing in terms of learning? Answer with achieved, needs help or progressing ";
	learningProgress = getInput.getString();
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