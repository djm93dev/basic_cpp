#include <iostream>
#include <string>


void* operator new(size_t size)
{
	std::cout << "Allocating " << size << " bytes" << std::endl;
	return malloc(size);
}


int main()
{
	std::string name = "Daniel"; // small string - no heap allocation, strings up to 15 characters are stored in a stack buffer

	std::cin.get();
}