#include <iostream>
#include <vector>

#include <unordered_map>


int main()
{
	std::vector<int> values = { 1, 2, 3, 4, 5 }; 
	
	for (int i = 0; i < values.size(); i++)
	{
		std::cout << values[i] << std::endl;
	}

	for (int value : values)
	{
		std::cout << value << std::endl;
	}

	std::vector<int>::iterator it = values.begin();
	while (it != values.end())
	{
		std::cout << *it << std::endl;
		it++;
	}

	for (std::vector<int>::iterator it = values.begin(); it != values.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	

	using ScoreMap = std::unordered_map<std::string, int>;
	ScoreMap map;
	map["one"] = 1;
	map["two"] = 2;

	for (ScoreMap::const_iterator it = map.begin(); it != map.end(); it++)
	{
		std::cout << it->first << " : " << it->second << std::endl;
	}

	for (auto kv : map)
	{
		std::cout << kv.first << " : " << kv.second << std::endl;
	}

	// C++ 17
	for (auto [key, value] : map)
	{
		std::cout << key << " : " << value << std::endl;
	}
	
	std::cin.get();
}