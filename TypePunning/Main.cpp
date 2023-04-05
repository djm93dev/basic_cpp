#include <iostream>

struct Entity
{
	int x, y;
};



int main()
{

	Entity e = { 5, 8 };

	int* position = (int*)&e; 

	std::cout << position[0] << ", " << position[1] << std::endl;


	int a = 50;
	// double value = (double*)&a; // Explicit conversion from int to double
	double value = a; // Implicit conversion from int to double
	
	std::cout << value << std::endl;


	


	std::cin.get();
}