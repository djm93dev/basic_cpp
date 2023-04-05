#include <iostream>
#include <string>

template<typename T> // T is a type parameter, it can accept any type of prim data
void Print(T value)
{
	std::cout << value << std::endl;
}


int main()
{
	Print(5);
	Print("Hello");
	Print(5.5f);
	
	std::cin.get();
}