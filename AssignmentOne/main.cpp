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

	return 0;
}

