#include <iostream>
#include <vector>
#include "Vector.h"

int main()
{
	Vector<int> values;
	values.EmplaceBack(1);
	values.EmplaceBack(2);
	values.EmplaceBack(3);
	values.EmplaceBack(4);
	values.EmplaceBack(5);
	
	std::cout << "Not using iterators" << std::endl;
	for (int i = 0; i < values.Size(); i++)
	{
		std::cout << values[i] << std::endl;
	}

	std::cout << "Range based for loop" << std::endl;
	for (int value : values)
	{
		std::cout << value << std::endl;
	}
	
	std::cout << "Using iterators" << std::endl;
	for (Vector<int>::Iterator it = values.begin(); it != values.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	


	

	#if 0
	std::vector<int> values{ 1, 2, 3, 4, 5 };
	
	for (int i = 0; i < values.size(); i++)
	{
		std::cout << values[i] << std::endl;
	}
	
	for (int value : values)
	{
		std::cout << value << std::endl;
	}

	for (std::vector<int>::iterator it = values.begin(); it != values.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	#endif
	
	
	

	std::cin.get();
}