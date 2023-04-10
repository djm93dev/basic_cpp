#include <iostream>
#include <string>
#include <tuple>

std::tuple<std::string, int> CreatePerson()
{
	return { "Daniel", 29 };
}


int main()
{

	auto[name, age] = CreatePerson(); // C++17 Structured Bindings

	std::cout << name << " is " << age << " years old." << std::endl; // Daniel is 29 years old.

}