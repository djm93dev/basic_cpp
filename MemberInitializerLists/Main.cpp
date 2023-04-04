#include <iostream>
#include <string>

class Entity
{
private:
	std::string m_Name;
	int m_Age;
public:
	Entity()
		: m_Name("Unknown"), m_Age(0) // This is the initializer list
	{
		
	}
	
	Entity(const std::string& name, int age)
		: m_Name(name), m_Age(age) // This is the initializer list
	{
		
	}

	const std::string& GetName() const { return m_Name; }
	const int& GetAge() const { return m_Age; }
};


int main()
{
	Entity e0;
	std::cout << e0.GetName() << std::endl;
	std::cout << e0.GetAge() << std::endl;
	
	Entity e1("Daniel", 29);
	std::cout << e1.GetName() << std::endl;
	std::cout << e1.GetAge() << std::endl;

	std::cin.get();
}