//==============================================================
// Filename : BMI.h
// Authors : Timon Kruiper & ....
// Version : 1
// License :
// Description : Header file containing functions for BMI application
//==============================================================

#ifndef BMI_H
#define BMI_H

// this function ask the user to fill in his/her weight.
float readUserWeight();;

// this function ask the user to fill in his/her height.
float readUserHeight();

// this function returns the BMI of a user.
float calculateBMI(float weightUser, float heightUser);

// prints the information about the passed in BMI.
void evaluateAndPrintBMI(float BMI);

// prints info about BMI to the console.
void printInfo();

#endif // !BMI_H