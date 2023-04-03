#include <iostream>


int main()
{
	int var = 8;
	int* ptr = &var;
	*ptr = 10;
	std::cout << var << std::endl;


	char* buffer = new char[8];
	memset(buffer, 0, 8);



	std::cin.get();
}