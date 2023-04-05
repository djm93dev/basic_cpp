#include <iostream>
#include <array>

int main()
{
	std::array<int, 5> myArray = { 9, 7, 5, 3, 1 };

	// Print the array
	for (int i = 0; i < myArray.size(); i++)
	{
		std::cout << myArray[i] << std::endl;
	}
	
	std::cin.get();
}