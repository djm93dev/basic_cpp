#include <iostream>
#include <string>

class Entity
{
public:
	void Print() const { std::cout << "Hello" << std::endl; }
	
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

	Entity* operator->() { return m_Ptr; }
};


int main()
{
	Entity e;
	e.Print();
	
	Entity* ptr = &e;
	
	ptr->Print(); // same as (*ptr).Print();

	ScopedPtr e1 = new Entity();
	e1->Print();
	
	std::cin.get();
}