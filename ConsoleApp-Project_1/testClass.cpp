#include <iostream>

#include "common.h"
#include "testClass.h"

using namespace std;

strTestClass::strTestClass(void)
{
	m_StrPtr = new uint8_t[6];
	memset(m_StrPtr, '\0', 6);
	cout << "Normal constructor allocated ptr" << endl;
}

strTestClass::strTestClass(const strTestClass& obj)
{
	m_StrPtr = new uint8_t[6];
	memset(m_StrPtr, '\0', 6);

	memcpy(m_StrPtr, obj.m_StrPtr, 5);

	cout << "Copy constructor initialized new object" << endl;
}

void strTestClass::setStringValue(uint8_t* str)
{
	if (m_StrPtr != NULL && str != NULL)
	{
		memcpy(m_StrPtr, str, 5);
		cout << "Set the string value" << endl;
	}
}

uint8_t* strTestClass::getStringValue(void)
{
	return m_StrPtr;
}

void strTestClass::displayStringValue(strTestClass strObj)
{
	cout << "Display string value - " << strObj.m_StrPtr<<endl;
}

strTestClass::~strTestClass()
{
	delete[] m_StrPtr;

	cout << "Destructor freed memory" << endl;
}