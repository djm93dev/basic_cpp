#include <iostream>
#include <string>

class Entity // classes are private by default, structs are public by default
{
// private: private variables can only be accessed by the class itself
protected: // protected variables can be accessed by the class itself and any derived classes
	int X, Y;
public: // public variables can be accessed by any other class or function
	Entity() // constructor
	{
		X = 0;
		Y = 0;
	}
	
};

class Player : public Entity
{
public:
	Player()
	{
		X = 2;
	}
};
};

int main()
{

	std::cin.get();
}