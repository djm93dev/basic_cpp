#include <iostream>
#include <string>
#include <fstream>
#include <optional>

std::optional<std::string> ReadFileAsString(const std::string& filepath)
{
	std::ifstream stream(filepath);
	if (stream)
	{
		std::string result;
		stream.seekg(0, std::ios::end);
		result.resize(stream.tellg());
		stream.seekg(0, std::ios::beg);
		stream.read(&result[0], result.size());
		stream.close();
		return result;
	}
	return {};
}

int main()
{
	

	
	std::optional<std::string> file = ReadFileAsString("data.txt");
	std::string value = file.value_or("Not present");
	std::cout << value << std::endl;
	
	if (file)
	{
		std::cout << *file << std::endl;
	}
	else
	{
		std::cout << "Could not open file" << std::endl;
	}
}