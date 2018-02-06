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

bool Person::setBirthDate(int day, int month, int year)
{
	bool correct = true;
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
	return to_string(birthDay) + "-" + to_string(birthMonth) + "-" + to_string(birthYear);
}

int Person::getAge()
{
	time_t rawtime;
	struct tm tminfo;

	time(&rawtime);
	localtime_s(&tminfo, &rawtime);
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


