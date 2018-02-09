//==============================================================
// Filename : main.cpp
// Authors : Timon Kruiper & Dang Dinh Viet Anh
// Version : 1
// License :
// Description : Source file containing main function for the User application
//==============================================================

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int main() {
	cout << "Person information" << endl << endl;

	Person person;

	string firstName, lastName;
	cout << "What is your first name: ";
	getline(cin, firstName); // getline is used, because otherwise the user cannot use spaces

	cout << "What is your last name: ";
	getline(cin, lastName);
	
	person.setName(firstName, lastName);

	// Ask the user their DOB and if it returns an error ask the user again
	bool check = true;
	while (check) {
		string dob;
		cout << "What is your date of birth (DD/MM/YYYY): ";
		cin >> dob;
		check = !person.setBirthDate(dob);
	}

	cout << endl;

	// show all information to the user
	cout << "Full name: " << person.getName() << endl;
	cout << "Date of birth: " << person.getBirthDate() << endl;
	cout << "Age: " << person.getAge() << endl;
	cout << "Maximum heartrate: " << person.calculateMaximumHeartRate() << endl;
	vector<int> heartRates = person.calculateTargetHeartRates();
	cout << "Target heartrate: Min: " + to_string(heartRates[0]) + ", Max : " + to_string(heartRates[1]) << endl;

	return 0;
}

