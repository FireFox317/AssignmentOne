//==============================================================
// Filename :
// Authors :
// Version :
// License :
// Description :
//==============================================================

#include <iostream>
#include "Person.h"

using namespace std;

int main() {
	Person timon("Timon", "Kruiper", 31, 7, 1998);

	cout << timon.getBirthDate() << endl;
	cout << timon.getName() << endl;
	cout << timon.getAge() << endl;
	cout << timon.calculateMaximumHeartRate() << endl;
	vector<int> heartRates = timon.calculateTargetHeartRates();
	cout << "Min: " + to_string(heartRates[0]) + ", Max: " + to_string(heartRates[1]) << endl;

	return 0;
}

