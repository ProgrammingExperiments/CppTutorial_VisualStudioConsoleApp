// ConsoleApp-Project_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/* User defined header files */
#include "testClass.h"

using namespace std;

int main()
{
	/* Normal constructor */
	strTestClass testObj1;
	uint8_t buffer[6] = { 0 };
	memset(buffer, '\0', 6);
	testObj1.setStringValue((uint8_t*)"ANILJ");
	memcpy(buffer, testObj1.getStringValue(), 5);
	cout <<"testObj1 string value - "<< buffer<<endl;
	cout << "******************************************" << endl;

	/* Copy constructor - Assignment operator */
	strTestClass testObj2 = testObj1;
	uint8_t buffer2[6] = { 0 };
	memset(buffer2, '\0', 6);
	memcpy(buffer2, testObj2.getStringValue(), 5);
	cout << buffer2 << endl;

	/* Copy constructor - Function parameter */
	strTestClass testObj3;
	testObj3.displayStringValue(testObj1);
}

