#include <iostream>

class Base
{
public:
	Base()
	{
		std::cout << "Base Constructor" << std::endl;
	}
	~Base()
	{
		std::cout << "Base Destructor" << std::endl;
	}
};

class Derived : public Base
{
public:
	Derived()
	{
		std::cout << "Derived Constructor" << std::endl;
	}
	~Derived()
	{
		std::cout << "Derived Destructor" << std::endl;
	}
};

class AnotherClass : public Base
{
public:
	AnotherClass()
	{
		std::cout << "AnotherClass Constructor" << std::endl;
		
	}
	~AnotherClass()
	{
		std::cout << "AnotherClass Destructor" << std::endl;
	}
};


int main()
{
	
	int a = 5;
	double value = a; // Implicit conversion, no loss of data

	double value2 = 5.5; // Implicit conversion, no loss of dat
	int b = (int)value2 + 5.3; // Explicit conversion, loss of data - C-style cast

	double s = static_cast<int>(value2) + 5.3; // Explicit conversion, no loss of data - static_cast

	
	std::cin.get();
}