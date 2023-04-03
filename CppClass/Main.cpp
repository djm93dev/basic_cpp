#include <iostream>

class Log
{
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;
	
private:
	int m_LogLevel = LogLevelInfo; // m_ is a convention for member variables that are private
public:
	void SetLevel(int level)
	{
		m_LogLevel = level;
	}
	void Error(const char* message)
	{
		if (m_LogLevel >= LogLevelError)
			std::cout << "[ERROR]: " << message << std::endl;
	}

	void Warn(const char* message)
	{
		if (m_LogLevel >= LogLevelWarning)
			std::cout << "[WARNING]: " << message << std::endl;
		
	}
	
	void Info(const char* message)
	{
		if (m_LogLevel >= LogLevelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}
	

};

int main()
{


	Log log; // initialize log object
	//log.SetLevel(log.LogLevelWarning); // set log level to warning
	log.Warn("Warn!"); // print warning message
	log.Error("Error!"); // print error message
	log.Info("Info!"); // print info message
	std::cin.get();
}