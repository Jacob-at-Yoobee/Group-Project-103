#include "../header/Student_records.h"

using namespace std;

int StudentRecord::execute()
{
	int opt;
	cout << "Student Rcords\n";
	cout << "1) Add Student\n";
	cout << "2) Edit student Record\n";
	cout << "3) Delete Student Record\n";
	cout << "4) Update Record\n";
	cout << "5) View the Records\n";
	cout << "Enter a number: ";
	opt = getInput.getNumber();
	if (opt == 1)
	{
		//addStudent();
		//this->addStudent();
	}
	else if (opt == 2)
	{
		//editRecords();
		//this->editStudent();
	}
	else if (opt == 3)
	{
		//deleteRecords();
		this->deleteStudent();
	}
	else if (opt == 4)
	{
		//updateRecord();
		//this->updateStudent();
	}
	else if (opt == 5)
	{
		//viewRecords();
		//this->viewStudent();
	}
	else
	{
		cout << "\nInalid Choice!\n";
		StudentRecord();
	}
	return 0;
}


//int StudentRecord::addStudent() {

//}

//int StudentRecord::editStudent() {

//}

void StudentRecord::deleteStudent() {
	string deleteStudent;
	cout << "Delete Student Record\n\n";
	cout << "Enter Students Name and Class:\n\n";

	cout << "Student's Name: ";

	cout << "\nStudent's Class: ";

	//Add if statement to check if that student exists

	//Else if student does exsist
	cout << "\nType 'Delete' to confirm! ";
	deleteStudent = getInput.getString();
	deleteStudent[0] = toupper(deleteStudent[0]);
	if (deleteStudent == "Delete") 
	{
		//Removes student from the files/database
		cout << "Student's Record Removed!\n";
	}

}


//int StudentRecord::updateStudent() {

//}

//int StudentRecord::viewStudent() {

//}