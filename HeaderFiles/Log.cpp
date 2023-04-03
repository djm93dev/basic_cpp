#include"Log.h"
#include <iostream>

void InitLog()
{
	Log("Initialized Log");
}

void Log(const char* message)
{
	std::cout << message << std::endl;
}