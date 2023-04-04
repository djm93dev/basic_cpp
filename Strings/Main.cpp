#include <iostream>
#include <string>

int main()
{
	const char* name = "Daniel"; // allocate a string literal on the stack
	// name[2] = 'x'; // cannot assign to a variable that is const
	std::cout << name << std::endl;

	std::string name2 = "Daniel"; // allocate a string
	name2[2] = 'x'; // can assign to a variable that is not const
	std::cout << name2 << std::endl;
	bool contains = name2.find("ni") != std::string::npos;
	std::cout << contains << std::endl;
	
	
	
	std::cin.get();
}