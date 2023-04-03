#include <iostream>


class Entity
{
public:
	float X, Y;

	Entity()
	{
		X = 0.0f;
		Y = 0.0f;
	}

	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;

		std::cout << "X: " << X << " Y: " << Y << std::endl;
	}
};

class Player : public Entity
{
public:
	const char* Name;

	void PrintName()
	{
		std::cout << Name << std::endl;
	}

	
	
	
};


int main()
{
	
	Player player;
	player.Move(5, 5);
	player.Name = "Daniel";
	player.PrintName();

	

	
	std::cin.get();
}