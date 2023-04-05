#include <iostream>
#include <vector>
#include <functional>


void ForEach(const std::vector<int>& v, const std::function<void(int)>& func)
{
	for (int value : v)
		func(value);
}


int main()
{

	std::vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int a = 5;
	
	auto lambda = [&a](int value) {std::cout << "Value: " << a << std::endl; }; // a is captured by reference
	
	ForEach(v, lambda);
	std::cin.get();
}