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
		
		if (i == 3)
			break; // Break out of the loop

		if (i == 4)
			return 0; // Return from the function
	}

	
	std::cin.get();
}