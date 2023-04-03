#include <iostream>
#include "Log.h"

int main()
{
	for (int i = 0; i < 5; i++) // This is a simple for loop, it will run 5 times by incrementing i by 1 each time.
	{
		Log("Hello World!");
	}

	int a = 0;
	
	while (a < 5) // This is a simple while loop, it will run 5 times by incrementing a by 1 each time.
	{
		Log("Hello World!");
		a++;
	}

	int b = 0;
	
	do // This is a simple do while loop, it will run 5 times by incrementing a by 1 each time.
	{
		Log("Hello World!");
		b++;
	} while (b < 5);

	std::cin.get();
	
}