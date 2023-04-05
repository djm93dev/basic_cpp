#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

std::string GetName()
{
	return "Daniel";
}

class Device
{
};

class DeviceManager
{
private:
	std::unordered_map<std::string, std::vector<Device*>> m_Devices;
public:
	const std::unordered_map<std::string, std::vector<Device*>>& GetDevices() const { return m_Devices; }
};


int main()
{

	std::vector<std::string> strings;
	strings.push_back("Daniel");
	strings.push_back("McDonald");

	for (auto it = strings.begin(); it != strings.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	
	auto name = GetName(); // auto will deduce the type of name
	
	auto a = 5; // auto will deduce the type of a to be an int
	
	auto b = a; // auto will deduce the type of b to be an int

	DeviceManager dm;
	const auto& devices = dm.GetDevices(); // auto will deduce the type of devices to be a const reference to a map of strings to devices
	
	
	
	std::cin.get();
}