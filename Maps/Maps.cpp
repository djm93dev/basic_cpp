#include <iostream>
#include <vector>

#include <map>
#include <unordered_map>

struct CityRecord
{
	std::string Name;
	uint64_t Population;
	double Latitude, Longitude;


	
};

int main()
{
	// vector of cities
	std::vector<CityRecord> cities;
	
	cities.emplace_back(CityRecord{ "London", 8'787'892, 51.5074, 0.1278 });
	cities.emplace_back(CityRecord{ "Paris", 2'148'271, 48.8566, 2.3522 });
	cities.emplace_back(CityRecord{ "New York", 8'622'698, 40.7128, 74.0060 });
	cities.emplace_back(CityRecord{ "Tokyo", 9'273'000, 35.6895, 139.6917 });
	cities.emplace_back(CityRecord{ "Sydney", 5'230'000, -33.8688, 151.2093 });

	for (const auto& city : cities)
	{
		if (city.Name == "London")
		{
			std::cout << "London's population is " << city.Population << std::endl;
		}
	}

	// map of cities
	std::map<std::string, CityRecord> cityMap;
	
	cityMap["London"] = CityRecord{ "London", 8'787'892, 51.5074, 0.1278 };
	cityMap["Paris"] = CityRecord{ "Paris", 2'148'271, 48.8566, 2.3522 };
	cityMap["New York"] = CityRecord{ "New York", 8'622'698, 40.7128, 74.0060 };
	cityMap["Tokyo"] = CityRecord{ "Tokyo", 9'273'000, 35.6895, 139.6917 };
	cityMap["Sydney"] = CityRecord{ "Sydney", 5'230'000, -33.8688, 151.2093 };
	
	std::cout << "London's population is " << cityMap["London"].Population << std::endl;
	
	// unordered map of cities
	std::unordered_map<std::string, CityRecord> cityUnorderedMap;
	
	cityUnorderedMap["London"] = CityRecord{ "London", 8'787'892, 51.5074, 0.1278 };
	cityUnorderedMap["Paris"] = CityRecord{ "Paris", 2'148'271, 48.8566, 2.3522 };
	cityUnorderedMap["New York"] = CityRecord{ "New York", 8'622'698, 40.7128, 74.0060 };
	cityUnorderedMap["Tokyo"] = CityRecord{ "Tokyo", 9'273'000, 35.6895, 139.6917 };
	cityUnorderedMap["Sydney"] = CityRecord{ "Sydney", 5'230'000, -33.8688, 151.2093 };
	
	std::cout << "London's population is " << cityUnorderedMap["London"].Population << std::endl;
	

	std::cin.get();
}