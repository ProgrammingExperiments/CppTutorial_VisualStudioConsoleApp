// ConsoleApp-Project_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdint.h>

/* User defined header files */
#include "testClass.h"

using namespace std;

template <typename type_t>
type_t const& addNumbers(type_t const& ip1, type_t const& ip2);
int main()
{
	uint32_t a = 10;
	uint32_t b = 20;
	cout << "Sum of 2 integers -> " << addNumbers(a, b) << endl;

	double_t x = 10.243;
	double_t y = 20.34232;
	cout << "Sum of 2 doubles -> " << addNumbers(x, y) << endl;

	return 0;
}

template<typename type_t>
type_t const& addNumbers(type_t const& ip1, type_t const& ip2)
{
	return (ip1 + ip2);
}
