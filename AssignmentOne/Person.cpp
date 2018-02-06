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

void Person::setBirthDate(int day, int month, int year)
{
	if (day < 1 || day > 31) {
		cout << "Day must be between 1-31" << endl;
	}
	else {
		birthDay = day;
	}

	if (month < 1 || month > 12) {
		cout << "Month must be between 1-12" << endl;
	}
	else {
		birthMonth = month;
	}
	birthYear = year;
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

	int targetyear = birthYear;
	int targetmonth = birthMonth;

	if (targetmonth > currentmonth) {
		return currentyear - targetyear - 1;
	}
	else {
		return currentyear - targetyear;
	}
}


