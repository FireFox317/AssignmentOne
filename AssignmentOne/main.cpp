//==============================================================
// Filename :
// Authors :
// Version :
// License :
// Description :
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
	getline(cin, firstName);

	cout << "What is your last name: ";
	getline(cin, lastName);
	
	person.setName(firstName, lastName);

	bool check = true;
	while (check) {
		string dob;
		cout << "What is your date of birth (DD/MM/YYYY): ";
		cin >> dob;
		check = !person.setBirthDate(dob);
	}

	cout << endl;

	cout << "Full name: " << person.getName() << endl;
	cout << "Date of birth: " << person.getBirthDate() << endl;
	cout << "Age: " << person.getAge() << endl;
	cout << "Maximum heartrate: " << person.calculateMaximumHeartRate() << endl;
	vector<int> heartRates = person.calculateTargetHeartRates();
	cout << "Target heartrate: Min: " + to_string(heartRates[0]) + ", Max : " + to_string(heartRates[1]) << endl;

	return 0;
}

