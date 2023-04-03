#include <iostream>

extern int s_Variable; // s_Variable is declared in Static.cpp

int main()
{
	std::cout << s_Variable << std::endl;
	std::cin.get();
}