#include <iostream>

#include "common.h"
#include "testClass.h"

using namespace std;

uint16_t testClass::getVar(void)
{
	return var1;
}

void testClass::setVar(uint16_t var)
{
	var1 = var;
}