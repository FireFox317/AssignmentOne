//==============================================================
// Filename : Person.cpp
// Authors : Timon Kruiper & Dang Dinh Viet Anh
// Version : 1
// License :
// Description : Source file containing Person class
//==============================================================

#include "Person.h"
#include <iostream>
#include <ctime>

using namespace std;

Person::Person()
{
}

Person::Person(string firstName, string lastName, int birthDay, int birthMonth, int birthYear)
	:firstName(firstName), lastName(lastName), birthDay(birthDay), birthMonth(birthMonth), birthYear(birthYear)
{
}

void Person::setName(string first, string last)
{
	firstName = first;
	lastName = last;
}

bool Person::setBirthDate(string dob)
{
	bool correct = true;

	string dayStr, monthStr, yearStr;
	int day, month, year;

	// The following code splits the DOB string into seperate day, month and birth string
	// and converts them to integers.

	size_t index = dob.find("/");
	if (index == string::npos) {
		cout << "Format is DD/MM/YYYY!" << endl;
		return false;
	}

	dayStr = dob.substr(0, index);
	day = stoi(dayStr);
	dob.erase(0, index + 1);

	index = dob.find("/");
	if (index == string::npos) {
		cout << "Format is DD/MM/YYYY!" << endl;
		return false;
	}
	monthStr = dob.substr(0, index);
	month = stoi(monthStr);
	dob.erase(0, index + 1);

	year = stoi(dob);

	// Checks the correct ranges for the day and months.
	if (day < 1 || day > 31) {
		cout << "Day must be between 1-31" << endl;
		correct = false;
	}
	else {
		birthDay = day;
	}

	if (month < 1 || month > 12) {
		cout << "Month must be between 1-12" << endl;
		correct = false;
	}
	else {
		birthMonth = month;
	}
	birthYear = year;
	return correct;
}

string Person::getName()
{
	return firstName + " " + lastName;
}

string Person::getBirthDate()
{
	return to_string(birthDay) + "/" + to_string(birthMonth) + "/" + to_string(birthYear);
}

int Person::getAge()
{
	time_t rawtime; 
	struct tm tminfo;

	time(&rawtime); // Number of seconds since 1-1-1900.
	localtime_s(&tminfo, &rawtime); // Converts number of seconds to D/M/Y H:M:S

	int currentyear = 1900 + tminfo.tm_year;
	int currentmonth = tminfo.tm_mon + 1;
	int currentday = tminfo.tm_mday;

	int year;

	if (birthMonth > currentmonth) {
		year = currentyear - birthYear - 1;
	}
	else if (birthMonth == currentmonth){
		if (birthDay > currentday) {
			year = currentyear - birthYear - 1;
		}
		else {
			year = currentyear - birthYear;
		}
	}
	else {
		year = currentyear - birthYear;
	}
	return year;
}

int Person::calculateMaximumHeartRate()
{
	return 220-Person::getAge();
}

vector<int> Person::calculateTargetHeartRates()
{
	vector<int> targetHeartRates(2);
	int maxHeartRate = Person::calculateMaximumHeartRate();
	targetHeartRates[0] = (int)(0.5 * maxHeartRate); // HeartRate is a integer, so it is cast to an int
	targetHeartRates[1] = (int)(0.85 * maxHeartRate);
	return targetHeartRates;
}


