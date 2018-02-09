//==============================================================
// Filename : BMI.cpp
// Authors : Timon Kruiper & Dang Dinh Viet Anh
// Version : 1
// License :
// Description : Source file containing BMI application
//==============================================================

#include "BMI.h"
#include <iostream>

using namespace std;

float readUserWeight() {
	float weightUser;
	cout << "Your weight (kg): ";
	cin >> weightUser;
	return weightUser;
}

float readUserHeight() {
	float heightUser;
	cout << "Your length (m): ";
	cin >> heightUser;
	return heightUser;
}

float calculateBMI(float weightUser, float heightUser) {
	return weightUser / (heightUser*heightUser);
}

void evaluateAndPrintBMI(float BMI) {
	cout << endl << "Your BMI is " << BMI << endl;
	cout << "This BMI corresponds to ";
	if (BMI < 18.5) {
		cout << "underweight";
	}
	else if (BMI >= 18.5 && BMI <= 24.9) {
		cout << "normal";
	}
	else if (BMI > 25 && BMI <= 29.9) {
		cout << "overweight";
	}
	else if (BMI > 30) {
		cout << "obese";
	}
	cout << "!" << endl;
}

void printInfo() {
	cout << "BMI Values:" << endl;
	cout << "Underweight:\tless than 18.5" << endl;
	cout << "Normal:\t\tbetween 18.5 and 24.9" << endl;
	cout << "Overweight:\tbetween 25 and 29.9" << endl;
	cout << "Obese:\t\t30 or greater" << endl;
}