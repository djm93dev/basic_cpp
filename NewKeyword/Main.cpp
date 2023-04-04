#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
	String m_Name;
public:
	Entity() : m_Name("Unknown") {} // Default constructor
	Entity(const String& name) : m_Name(name) {} // Constructor with parameter
	
	const String& GetName() const { return m_Name; }
};

int main()
{
	int a = 2; // Stack
	int* b = new int; // Heap

	Entity e0; // Stack
	Entity* e1 = new Entity(); // Heap
	delete e1; // Delete the object from the heap

	std::cin.get();
}

