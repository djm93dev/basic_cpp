#include <iostream>
#include <string>
#include <memory>


class Entity
{
public:
	Entity()
	{
		std::cout << "Created Entity!" << std::endl;
	}

	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}
	
	void Print()
	{
		std::cout << "Hello!" << std::endl;
	}
};

int main()
{
	{
		std::unique_ptr<Entity> entity = std::make_unique<Entity>(); // Unique pointer, stack allocated
		entity->Print();

		std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>(); // Shared pointer, stack allocated
		sharedEntity->Print();
		
	}

	std::cin.get();
}