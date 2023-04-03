#include <iostream>
#include "Log.h"

int main()
{
	
	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0)
			continue; // Skip the rest of the loop and continue to the next iteration
		Log("Hello World!");
		
		std::cout << i << std::endl;
		
		if (i == 4)
			break; // Break out of the loop
	}

	
	std::cin.get();
}