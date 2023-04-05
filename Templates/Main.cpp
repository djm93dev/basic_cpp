#include <iostream>
#include <string>

template<typename T> // T is a type parameter, it can accept any type of prim data
void Print(T value)
{
	std::cout << value << std::endl;
}


template<typename T1, int N>
class Array
{
private:
	T1 m_Array[N];
public:

	// default constructor
	Array()
		: m_Array{ 0 }
	{
		std::cout << "Array created" << std::endl;
	}
	
	int GetSize() const { return N; }
};


int main()
{
	Print(5);
	Print("Hello");
	Print(5.5f);
	
	Array<int, 5>array;
	std::cout << array.GetSize() << std::endl;
	
	std::cin.get();
}