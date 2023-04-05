#include <iostream>
#include <vector>
#include <algorithm>



int main()
{
	std::vector<int> v = { 2, 6, 4, 8, 1, 9, 7, 3, 5 };
	//std::sort(v.begin(), v.end()); // sort the vector in ascending order
	//std::sort(v.begin(), v.end(), std::greater<int>()); // sort the vector in descending order
	//std::sort(v.begin(), v.end(), [](int a, int b) { return a > b; }); // sort the vector in descending order using lambda expression
	//std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; }); // sort the vector in ascending order using lambda expression

	// std::reverse(v.begin(), v.end()); // reverse the vector
	

	for (auto i : v)
		std::cout << i << " ";



	
	std::cin.get();
}