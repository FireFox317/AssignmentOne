//==============================================================
// Filename :
// Authors :
// Version :
// License :
// Description :
//==============================================================

#include <iostream>
#include "BMI.h"

using namespace std;

int main() {
	cout << "BMI Calculator" << endl << endl;

	// printing info
	printInfo();
	cout << endl;

	readUserData();
	calculateBMI();
	evaluateAndPrintBMI();

	return 0;
}

