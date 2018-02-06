#include "BMI.h"

float weightUser, heightUser, BMI;

void readUserData() {
	cout << "Your weight (kg): ";
	cin >> weightUser;
	cout << "Your length (m): ";
	cin >> heightUser;
}

void calculateBMI() {
	BMI = weightUser / (heightUser*heightUser);
}

void evaluateAndPrintBMI() {
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