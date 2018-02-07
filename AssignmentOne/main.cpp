//==============================================================
// Filename : main.cpp
// Authors : Timon Kruiper & ....
// Version : 1
// License :
// Description : Source file containing main function for the BMI application
//==============================================================

// iostream included for output to the console
#include <iostream>
#include "BMI.h"

// use for better readability
using namespace std;

int main() {
	// float used because weight and user can be a non-integer
	float weightUser, heightUser, BMI;

	cout << "BMI Calculator" << endl << endl;

	// see BMI.h for function explanation
	printInfo();
	cout << endl;

	readUserData(weightUser,heightUser);
	BMI = calculateBMI(weightUser, heightUser);
	evaluateAndPrintBMI(BMI);

	return 0;
}