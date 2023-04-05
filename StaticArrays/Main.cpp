#include <iostream>
#include <array>


// pass in array without knowing the size
void printArray(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << std::endl;
	}
}


int main()
{
	std::array<int, 5> myArray = { 9, 7, 5, 3, 1 };

	// Print the array
	for (int i = 0; i < myArray.size(); i++)
	{
		std::cout << myArray[i] << std::endl;
	}

	// Print the array using a function
	printArray(myArray.data(), myArray.size());
	
	std::cin.get();
}