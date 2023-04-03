#include <iostream>

class Entity
{
public:
	float X, Y;

	//Entity() // this is the constructor, it is called when the class is instantiated
	//{
	//	X = 0.0f;
	//	Y = 0.0f;
	//}
	
	Entity(float x, float y) // the constructor can also take parameters
	{
		X = x;
		Y = y;
	}
	

	void Print()
	{
		std::cout << X << ", " << Y << std::endl;
	}
	
};


int main() {

	Entity e(10.0f, 5.0f);
	e.Print();
	std::cin.get();
}