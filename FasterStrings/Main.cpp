#include <iostream>
#include <string>
#include <string_view>

static uint32_t s_AllocCount = 0;

void* operator new(size_t size)
{

	s_AllocCount++;
	std::cout << "Allocating " << size << " bytes" << std::endl;
	return malloc(size);
}

void PrintName(std::string_view name)
{
	std::cout << name << std::endl;
}


int main()
{
	//std::string name = "Daniel McDonald";
	const char* name = "Daniel McDonald";

	//std::string firstName = name.substr(0, name.find(' '));
	//std::string lastName = name.substr(name.find(' ') + 1);

	//std::string_view firstName(name.c_str(), name.find(' '));
	//std::string_view lastName(name.c_str() + name.find(' ') + 1, name.size() - name.find(' ') - 1);

	std::string_view firstName(name, 7);
	std::string_view lastName(name + 7, 8);
	
	PrintName(firstName);
	PrintName(lastName);
	
	
	
	
	std::cout << "Allocations: " << s_AllocCount << std::endl;
	std::cin.get();
}