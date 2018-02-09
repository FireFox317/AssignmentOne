//==============================================================
// Filename : Person.h
// Authors : Timon Kruiper & Dang Dinh Viet Anh
// Version : 1
// License :
// Description : Header file containing Person class definition
//==============================================================

#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>

class Person
{
public:
	Person();
	Person(std::string firstName, std::string lastName, int birthDay, int birthMonth, int birthYear);

	void setName(std::string first, std::string last);

	// This function returns true if the date of birth was correctly set,
    // else it will be false and a error message will be printed to the console.
	bool setBirthDate(std::string dob); // DOB should be formatted like DD/MM/YYYY!

	std::string getName();
	std::string getBirthDate();

	int getAge();
	int calculateMaximumHeartRate();
	// First element of vector is minimum heart rate, second is maximum. 
	std::vector<int> calculateTargetHeartRates(); 

private:
	std::string firstName, lastName;
	int birthDay, birthMonth, birthYear;
};

#endif // !PERSON_H
