#include <iostream>

class Random 
{
public:
	Random(const Random&) = delete; // Delete copy constructor
	
	static Random& Get()
	{
		return s_Instance; // Return the instance
	}

	float Float() 
	{
		return m_RandomGenerator; // Return the "random" number
	}

private:
	Random() {}

	float m_RandomGenerator = 0.5f; // "Random" number

	static Random s_Instance; // Instance of the class
};

Random Random::s_Instance; // Initialize the instance
	


int main() {
	
	float number = Random::Get().Float(); // Get the "random" number
	
	std::cout << number << std::endl; // Print the random number



	std::cin.get();
}