#include <iostream>
#include "Log.h"

int main()
{
	int x = 5;
	
	if (x == 5)
	{
		Log("x is 5");
	}

	std::cin.get();
}