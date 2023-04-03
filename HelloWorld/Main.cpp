#include <iostream>

int main()
{
	int variable = -2147483648; // int variable = the MIN value of an int
	unsigned int unsignedVariable = 4294967295; // unsigned int unsignedVariable = the MAX value of an unsigned int
	short shortVariable = -32767; // short shortVariable = the MAX value of a short
	unsigned short unsignedShortVariable = 65535; // unsigned short unsignedShortVariable = the MAX value of an unsigned short
	long longVariable = -2147483648; // long longVariable = the MIN value of a long
	unsigned long unsignedLongVariable = 4294967295; // unsigned long unsignedLongVariable = the MAX value of an unsigned long
	long long longLongVariable = 9223372036854775808; // long long longLongVariable = the MIN value of a long long
	unsigned long long unsignedLongLongVariable = 18446744073709551615; // unsigned long long unsignedLongLongVariable = the MAX value of an unsigned long long
	
	
	float floatVariable = 3.402823e+38f; // float floatVariable = the MAX value of a float
	double doubleVariable = 1.7976931348623158e+308; // double doubleVariable = the MAX value of a double
	long double longDoubleVariable = 1.7976931348623158e+308; // long double longDoubleVariable = the MAX value of a long double
	
	
	
	char character = 65; // char character = 'A' or 65
	
	bool boolean = true; // bool boolean = true or false
	

	
	
	std::cout << variable << std::endl;
	std::cout << unsignedVariable << std::endl;
	std::cout << shortVariable << std::endl;
	std::cout << unsignedShortVariable << std::endl;
	std::cout << longVariable << std::endl;
	std::cout << unsignedLongVariable << std::endl;
	std::cout << longLongVariable << std::endl;
	std::cout << unsignedLongLongVariable << std::endl;
	std::cout << floatVariable << std::endl;
	std::cout << doubleVariable << std::endl;
	std::cout << longDoubleVariable << std::endl;
	std::cout << character << std::endl;
	std::cout << boolean << std::endl;

	std::cout << sizeof(bool) << std::endl; // 1 byte
		
	std::cin.get();
}