#include <iostream>

 void Increment(int& value)
{
	value++;
}

//void Increment(int* value)
//{
//	(*value)++;
//}



int main()
{
	int a = 5;
	Increment(a);
	
	std::cout << "a = " << a << std::endl;
	std::cin.get();
}