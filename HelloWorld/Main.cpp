#include <iostream>

int main()
{
	int variable = -2147483648; // int variable = the MIN value of an int
	// unsigned int unsignedVariable = the MAX value of an unsigned int
	unsigned int unsignedVariable = 4294967295;
	
	std::cout << variable << std::endl;
	std::cout << unsignedVariable << std::endl;
	std::cin.get();
}