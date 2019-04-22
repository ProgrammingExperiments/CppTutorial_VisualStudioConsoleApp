#include <iostream>

#include "common.h"
#include "testClass.h"

using namespace std;

TestClass::TestClass(uint8_t len)
{
	m_length = len;
}

bool TestClass::compare(TestClass obj)
{
	if (this->m_length > obj.m_length)
	{
		return true;
	}
	else
	{
		return false;
	}
}