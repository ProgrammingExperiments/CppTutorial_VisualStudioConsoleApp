// ConsoleApp-Project_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/* User defined header files */
#include "testClass.h"

using namespace std;

int main()
{
	TestClass obj1(10);

	TestClass obj2(20);

	if (obj1.compare(obj2))
	{
		cout << "Obj 1 is greater than obj 2" << endl;
	}
	else
	{
		cout << "Obj 2 is greater than obj 1" << endl;
	}

}

