#include <iostream>
#include <string>


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
};

class ScopedPtr
{
private:
	Entity* m_Ptr;
public:
	ScopedPtr(Entity* ptr)
		: m_Ptr(ptr)
	{
	}

	~ScopedPtr()
	{
		delete m_Ptr;
	}
};


int main()
{

	{
		Entity e; // This is created on the stack (automatically deleted)
		Entity* e2 = new Entity(); // This is created on the heap (must be deleted manually)
		delete e2; // This is how you delete an object created on the heap
		
		ScopedPtr e3 = new Entity(); // This is created on the heap but is automatically deleted when it goes out of scope
	}

	
	std::cin.get();
}