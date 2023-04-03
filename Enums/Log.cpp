#include <iostream>

class Log
{
public:

	enum Level
	{
		LevelError = 0, LevelWarning, LevelInfo
	};

private:
	Level m_LogLevel = LevelInfo; // m_ is a convention for member variables that are private
public:
	void SetLevel(Level level)
	{
		m_LogLevel = level;
	}
	void Error(const char* message)
	{
		if (m_LogLevel >= LevelError)
			std::cout << "[ERROR]: " << message << std::endl;
	}

	void Warn(const char* message)
	{
		if (m_LogLevel >= LevelWarning)
			std::cout << "[WARNING]: " << message << std::endl;

	}

	void Info(const char* message)
	{
		if (m_LogLevel >= LevelInfo)
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