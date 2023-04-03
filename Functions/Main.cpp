#include <iostream>

int Multiply(int a, int b)
{
	return a * b;
}

void MultiplyAndLog(int a, int b)
{
	int result = Multiply(a, b);
	std::cout << result << std::endl;
}

int main()
{
	MultiplyAndLog(5, 5);
	MultiplyAndLog(10, 10);
	MultiplyAndLog(20, 20);
	std::cin.get();
}