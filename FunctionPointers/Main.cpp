#include <iostream>


void Daniel()
{
	std::cout << "Daniel" << std::endl;
}

int main()
{
	typedef void(*func)();
	func f1 = Daniel;
	f1();

	
	//void(*func)(); // func is a function pointer
	//func = Daniel;
	//func();
	
	//auto func = Daniel; // func is a function pointer
	//func();
	

	

	std::cin.get();
}