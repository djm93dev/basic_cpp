#include <iostream>


void Function()
{
	// int i = 0; 
	static int i = 0;
	i++;
	std::cout << i << std::endl;
}

int main()
{
	
	for (int i = 0; i < 5; i++)
	{
		Function();
	}
	std::cin.get();
}