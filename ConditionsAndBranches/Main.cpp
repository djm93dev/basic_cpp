#include <iostream>
#include "Log.h"

int main()
{
	int x = 5;
	
	if (x == 4)
	{
		Log("x is 5");
	}
	else
	{
		Log("x is not 5");
	}

	std::cin.get();
}