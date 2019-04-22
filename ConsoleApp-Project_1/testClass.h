#pragma once
/* Header Files */
#include <stdint.h>

class strTestClass
{
private:
	uint8_t* m_StrPtr;

public:
	strTestClass(void);
	strTestClass(const strTestClass& obj);
	~strTestClass();
	void setStringValue(uint8_t* str);
	uint8_t* getStringValue(void);
	void displayStringValue(strTestClass strObj);
};