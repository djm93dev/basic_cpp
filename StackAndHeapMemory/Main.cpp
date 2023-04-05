#include <iostream>
#include <string>


struct Vector3
{
	float x, y, z;

	Vector3() // Default constructor
		: x(1), y(2), z(3) // Initializer list
	{
		std::cout << "Vector3()" << std::endl; // Constructor body

	}
};

int main()
{

	// Stack
	int value = 5;
	int array[5];
	for (int i = 0; i < 5; i++)
	{
		array[i] = i;
	}
	Vector3 vector;
	

	// Heap
	int* hvalue = new int;
	*hvalue = 5;
	int* harray = new int[5];
	for (int i = 0; i < 5; i++)
	{
		harray[i] = i;
		std::cout << harray[i] << std::endl;
	}
	
	Vector3* hvector = new Vector3();

	delete hvalue;
	delete[] harray;

	std::cin.get();
}