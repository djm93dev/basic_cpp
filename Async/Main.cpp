// this will demonstrate the use of std::async

#include <iostream>
#include <future>
#include <chrono>

void doSomething(int i)
{
	for (int j = 0; j < 10; ++j)
	{
		std::cout << "doSomething(" << i << ") is running" << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
}


int main()
{
	std::cout << "Starting main()" << std::endl;

	// create a future
	std::future<void> fut = std::async(doSomething, 42);

	// do something else
	for (int i = 0; i < 10; ++i)
	{
		std::cout << "main() is running" << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
	
	// wait for the future to finish
	fut.wait();

	std::cout << "Finished main()" << std::endl;

	return 0;
	
}
