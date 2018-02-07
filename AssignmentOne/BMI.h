//==============================================================
// Filename : BMI.h
// Authors : Timon Kruiper & ....
// Version : 1
// License :
// Description : Header file containing functions for BMI application
//==============================================================

#ifndef BMI_H
#define BMI_H

// this function takes 2 floats and uses these to ask the user to fill in their weight.
void readUserData(float weightUser, float heightUser);

// this function returns the BMI of a user.
float calculateBMI(float weightUser, float heightUser);

// prints the information about the passed in BMI.
void evaluateAndPrintBMI(float BMI);

// prints info about BMI to the console.
void printInfo();

#endif // !BMI_H