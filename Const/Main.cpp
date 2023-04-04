#include <iostream>
#include <string>

class Entity
{
private:
	int m_X, m_Y;
public:
	int GetX() const { return m_X; } // const at the end of the function means that the function will not modify the object
	
	void SetX(int x) { m_X = x; }
	// without const at the end of the function, we can modify the object

};

void PrintEntity(const Entity& e) // const at the end of the function means that the function will not modify the object
{
	std::cout << e.GetX() << std::endl;
}


int main()
{
	
	Entity e;
	e.SetX(2);
	PrintEntity(e);


	
	const int MAX_AGE = 90;

	int* a = new int;

	*a = 2;
	a = (int*)&MAX_AGE;
	std::cout << *a << std::endl;
	
	
	
	std::cin.get();
}