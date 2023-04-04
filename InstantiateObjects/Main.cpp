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

	const String& GetName() const { return m_Name; } // Getter
};

int main()
{
	Entity e0;
	std::cout << e0.GetName() << std::endl;

	Entity e1("Daniel");
	std::cout << e1.GetName() << std::endl;

	std::cin.get();
}