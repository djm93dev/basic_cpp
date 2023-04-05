#include <iostream>
#include <chrono>
#include <thread>


struct Timer
{
	std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
	std::chrono::duration<float> duration;

	Timer()
	{
		start = std::chrono::high_resolution_clock::now();
	}

	~Timer()
	{
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;

		float s = duration.count();
		std::cout << "Timer took " << s << " seconds" << std::endl;
	}
};

void Function()
{
	Timer timer; // Start timer
	
	for (int i = 0; i < 100; i++)
	{
		std::cout << "Function: " << i << std::endl;
	}
}

void Function1()
{
	Timer timer; // Start timer
	
	int i = 0;
	
	while (i < 100)
	{
		std::cout << "Function1: " << i << std::endl;
		i++;
	}
}


int main()
{

	Function(); // Call function
	Function1(); // Call function
	

	std::cin.get();
}