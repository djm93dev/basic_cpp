#include <iostream>
#include <vector>


//void PrintValue(int value)
//{
	//std::cout << "Value: " << value << std::endl;
//}

void ForEach(const std::vector<int>& v, void(*func)(int)) // func is a function pointer 
{
	for (int value : v)
		func(value);
}







void Daniel()
{
	std::cout << "Daniel" << std::endl;
}

int main()
{

	std::vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	ForEach(v, [](int value) {std::cout << "Value: " << value << std::endl; }); // lambda expression


	
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