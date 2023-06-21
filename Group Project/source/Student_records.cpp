#include <iostream>

using namespace std;

void studentRecords()
{
	int opt;
	cout << "Student Rcords\n";
	cout << "1) Add Student\n";
	cout << "2) Edit student Record\n";
	cout << "3) Delete Student Record\n";
	cout << "4) Update Record\n";
	cout << "5) View the Records\n";
	cout << "Enter a number: ";
	cin >> opt;
	if (opt == 1)
	{
		//addStudent();
	}
	else if (opt == 2)
	{
		//editRecords();
	}
	else if (opt == 3)
	{
		//deleteRecords();
	}
	else if (opt == 4)
	{
		//updateRecord();
	}
	else if (opt == 5)
	{
		//viewRecords();
	}
	else
	{
		cout << "\nInalid Choice!\n";
		studentRecords();
	}
}