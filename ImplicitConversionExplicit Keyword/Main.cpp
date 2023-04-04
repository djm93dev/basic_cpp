#include <iostream>
#include <string>


class Entity
{
private:
	std::string m_Name;
	int m_Age;
public:
	Entity(const std::string& name) // Constructor
		: m_Name(name), m_Age(-1) {}
	Entity(int age) // Constructor
		: m_Name("Unknown"), m_Age(age) {}
	Entity(const char* name) // Constructor
		: m_Name(name), m_Age(-1) {}
	explicit Entity(const std::string& name, int age) // Constructor
		: m_Name(name), m_Age(age) {}

	const std::string& GetName() const { return m_Name; } // Getter
};

void PrintEntity(const Entity& entity)
{
	std::cout << entity.GetName() << std::endl;
}


int main()
{

	Entity a("Daniel"); // Constructor
	std::cout << a.GetName() << std::endl;
	
	Entity b(29); // Constructor
	std::cout << b.GetName() << std::endl;
	
	// implicit conversion
	Entity c = 22; // Constructor
	std::cout << c.GetName() << std::endl;

	Entity d = "Daniel"; // Constructor
	std::cout << d.GetName() << std::endl;

	// implicit conversion
	PrintEntity("Daniel"); // Constructor

	// explicit conversion
	PrintEntity(Entity("Daniel")); // Constructor


	
	std::cin.get();
}


	