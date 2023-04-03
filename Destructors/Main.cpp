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

		std::cout << "Created Entity!" << std::endl;
		
		X = x;
		Y = y;
	}

	~Entity() // this is the destructor, it is called when the class is destroyed
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}


	void Print()
	{
		std::cout << X << ", " << Y << std::endl;
	}

};

void Function()
{
	Entity e(10.0f, 5.0f);
	e.Print();
}

int main() {

	Function();
	std::cin.get();
}