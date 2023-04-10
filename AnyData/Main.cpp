#include <iostream>
#include <any>
#include <string>

int main()
{


	std::any data; // data can be any type of data type, C++17 feature
	data = std::string("Daniel");
	std::cout << std::any_cast<std::string>(data) << std::endl;

	data = 5;
	std::cout << std::any_cast<int>(data) << std::endl;
	
	data = 5.5;
	std::cout << std::any_cast<double>(data) << std::endl;
	
	std::cin.get();
	
}