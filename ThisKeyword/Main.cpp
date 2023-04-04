#include <iostream>
#include <string>



class Entity
{
public:
	int x, y;
	
	Entity(int x, int y)
		// : x(x), y(y) // Initializer list
	{
		// x = x; - cannot do this because it will be shadowed by the parameter
		// y = y; - cannot do this because it will be shadowed by the parameter
		this->x = x;
		this->y = y;

	}

	int GetX() const
	{
		const Entity* e = this;
		
		return x;
	}
	
};


int main()
{

	Entity e(10, 5);
	std::cout << e.GetX() << std::endl;



	std::cin.get();
}