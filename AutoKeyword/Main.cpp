#include <iostream>
#include <string>

std::string GetName()
{
	return "Daniel";
}


int main()
{
	auto name = GetName(); // auto will deduce the type of name
	
	auto a = 5; // auto will deduce the type of a to be an int
	
	auto b = a; // auto will deduce the type of b to be an int
	
	std::cin.get();
}