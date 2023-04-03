#include <iostream>

struct Entity // structs are public by default
{
	int x, y;
	// static int x, y; // static variables are shared between all instances of the class and can only be accessed through the class name and other static variables or functions
	

	void Print()
	{
		std::cout << x << ", " << y << std::endl;
	}
	
};


int main()
{

	Entity e;
	e.x = 2;
	e.y = 3;

	Entity e1;
	e1.x = 5;
	e1.y = 6;

	e.Print();
	e1.Print();


	
	std::cin.get();
}