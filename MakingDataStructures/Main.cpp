#include <iostream>
#include <array>


template <typename T, size_t S>
class Array
{
public:
	constexpr size_t Size() const { return S; }
	
	T& operator[](size_t index)
	{
		//if (index >= S)
		//{
		//	throw std::out_of_range("Index out of range");
		//}
		return m_Data[index];
	}
	const T& operator[](size_t index) const { return m_Data[index]; }

	T* Data() { return m_Data; }
	const T* Data() const { return m_Data; }
	
private:
	T m_Data[S];
};







int main()
{
	


	int size = 5;
	Array<std::string, 2> data;
	data[0] = "Hello";
	data[1] = "World";
	
	
	// const auto& constData = data;

	//memset(data.Data(), 0, data.Size() * sizeof(int));
	
	for (size_t i = 0; i < data.Size(); i++)
	{
		std::cout << data[i] << std::endl;
	}










	//std::array<int, 10> collection; // stack allocated array

	//collection.size(); // returns 10

	//for (int i = 0; i < collection.size(); i++)
	//{
	//	std::cout << collection[i] << std::endl;
	//}

	//int array[5]; // stack allocated array
	//int* heapArray = new int[5]; // heap allocated array


	
	std::cin.get();
}