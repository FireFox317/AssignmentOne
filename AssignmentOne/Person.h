#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
public:
	Person();
	Person(std::string firstName, std::string lastName, int birthDay, int birthMonth, int birthYear);

	void setName(std::string first, std::string last);
	void setBirthDate(int day, int month, int year);

	std::string getName();
	std::string getBirthDate();

	int getAge();

private:
	std::string firstName, lastName;
	int birthDay, birthMonth, birthYear;
};

#endif // !PERSON_H
