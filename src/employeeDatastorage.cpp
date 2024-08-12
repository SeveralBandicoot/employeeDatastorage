//============================================================================
// Name        : employeeDatastorage.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "person.h" // DO NOT INCLUDE IMPLEMENTATION FILE OF "person"

using namespace std;

void johnUser();
void janeUser();
void barrier();

int main()
{
	person john("John Ethernet Doe", "04/12/87", " ", 40, "X00908234"); // JOHN DOE'S DATA
	string userName, password;
	string validUserNames[] = { "doejohn412", "doejane901" };
	string validPasswords[] = { "blominShrine_.", "snarkYdandilion$e" };

	//Person john;

	cout << "Welcome to the database for Aperture Laboratories. Enter your login and password to access your employee file:\n";
	cout << "Username: "; getline(cin, userName);
	cout << "Password: "; getline(cin, password);

	if (userName == validUserNames[0] && password == validPasswords[0]) {
		barrier();
		cout << "\nWelcome John Doe..\n";
		barrier();
		johnUser();
	}
	else if (userName == validUserNames[1] && password == validPasswords[1]) {
		barrier();
		cout << "\nWelcome Jane Doe..\n";
		barrier();
		janeUser();
		}
	else {
		cout << "Invalid Login";
	}
}

void johnUser() {
	string occup, dob, empNum, log;
	empNum = "X00908234";
	occup = "Senior Technician";
	dob = "04/12/87";
	log = " ";

	cout << "\nName: John Ethernet Doe\n";
	cout << "Employee #: " << empNum << "\n";
	cout << "Occupation: " << occup << "\n";
	cout << "DOB: " << dob << "\n";
	cout << "Notes: " << log;
}

void janeUser() {
	string occup2, dob2, empNum2, log2;
	empNum2 = "X00001021";
	occup2 = "Data Technician";
	dob2 = "09/29/82";
	log2 = " ";

	cout << "\nName: Jane Mandogold Doe\n";
	cout << "Employee #: " << empNum2 << "\n";
	cout << "Occupation: " << occup2 << "\n";
	cout << "DOB: " << dob2 << "\n";
	cout << "Notes: " << log2;
}

void barrier() {
	for (int i = 0; i < 20; i++) {
		cout << "=";
	}
}
