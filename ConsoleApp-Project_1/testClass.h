#pragma once
/* Header Files */
#include <stdint.h>

class TestClass
{
private:
	uint8_t m_length;

public:
	TestClass(uint8_t len);
	bool compare(TestClass obj);

};