#include <iostream>

class Base
{
public:
	Base() { std::cout << "Constructing Base" << std::endl; }
	virtual ~Base() { std::cout << "Destructing Base" << std::endl; } // virtual destructor is needed to call the derived class destructor
};


class Derived : public Base
{
public:
	Derived() { std::cout << "Constructing Derived" << std::endl; }
	~Derived() { std::cout << "Destructing Derived" << std::endl; }
};


int main()
{
	Base* base = new Base();
	delete base;
	std::cout << "___________________________________\n";
	Derived* derived = new Derived();
	delete derived;

	std::cout << "___________________________________\n";

	Base* base2 = new Derived();
	delete base2;


	std::cin.get();
}