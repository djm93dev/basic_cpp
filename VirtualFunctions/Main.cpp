#include <iostream>
#include <string>


class Entity
{
public:
	virtual std::string GetName() { return "Entity"; } // virtual function is a function that can be overriden in a derived class
};

class Player : public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string& name)
		: m_Name(name) {}

	std::string GetName() override { return m_Name; } // override keyword is used to override a virtual function, if the function is not virtual, it will throw an error
};

void PrintName(Entity* entity)
{
	std::cout << entity->GetName() << std::endl;
}

int main()
{

	Entity* e = new Entity();
	std::cout << e->GetName() << std::endl;
	
	Player* p = new Player("Daniel");
	PrintName(p);
	
	std::cin.get();
}