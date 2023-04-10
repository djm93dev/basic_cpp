#include <iostream>
#include <variant>
#include <string>

int main()
{

	std::variant<std::string, int> data; // C++17
	data = "Daniel";
	std::cout << std::get<std::string>(data) << std::endl;
	data = 29;
	std::cout << std::get<int>(data) << std::endl;
	
	std::cin.get();
	
	
	

}