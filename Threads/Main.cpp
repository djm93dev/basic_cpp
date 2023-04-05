#include <iostream>
#include <thread>
#include <chrono>


static bool s_Finished = false; // global variable to control thread execution

void DoWork() // function to be executed in thread
{
	while (!s_Finished) // while global variable is false
	{
		std::cout << "Working... " << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		
	}
}




int main()
{

	std::thread worker(DoWork); // create thread and pass function to be executed
	std::cin.get();
	s_Finished = true; // set global variable to true
	worker.join(); // wait for thread to finish
	std::cout << "Finished" << std::endl;
	std::cin.get();
}