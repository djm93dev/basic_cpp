#include"Log.h" // "" means to look in the current directory for the file
#include <iostream> // <> means to look in the the include directory for the file

void InitLog()
{
	Log("Initialized Log");
}

void Log(const char* message)
{
	std::cout << message << std::endl;
}