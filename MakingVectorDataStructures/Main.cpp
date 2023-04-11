#include <iostream>

#include "Array.h"
#include "Vector.h"



struct Vector3
{
	float x = 0.0f, y = 0.0f, z = 0.0f;
	int* m_MemoryBlock = nullptr;
	
	Vector3() { m_MemoryBlock = new int[5]; }
	Vector3(float scalar)
		: x(scalar), y(scalar), z(scalar) {
		m_MemoryBlock = new int[5];
	}
	Vector3(float x, float y, float z)
		: x(x), y(y), z(z) {
		m_MemoryBlock = new int[5];
	}
	Vector3(const Vector3& other) = delete;

	Vector3(Vector3&& other) noexcept
		: x(other.x), y(other.y), z(other.z)
	{
		m_MemoryBlock = other.m_MemoryBlock;
		other.m_MemoryBlock = nullptr;
		std::cout << "Move" << std::endl;
	}
	~Vector3()
	{
		std::cout << "Destructor" << std::endl;
		delete[] m_MemoryBlock;
	}

	Vector3& operator=(const Vector3& other) = delete;
	
	Vector3& operator=(Vector3&& other) noexcept
	{
		m_MemoryBlock = other.m_MemoryBlock;
		other.m_MemoryBlock = nullptr;
		std::cout << "Move Assignment" << std::endl;
		x = other.x;
		y = other.y;
		z = other.z;
		return *this;
	}
	
	
};

template<typename T>
void PrintVector(const Vector<T>& vector)
{
	for (size_t i = 0; i < vector.Size(); i++)
	{
		std::cout << vector[i] << std::endl;
	}

	std::cout << "----------------" << std::endl;
}

template<>
void PrintVector(const Vector<Vector3>& vector)
{
	for (size_t i = 0; i < vector.Size(); i++)
	{
		std::cout << vector[i].x << ", " << vector[i].y << ", " << vector[i].z << std::endl;
	}

	std::cout << "----------------" << std::endl;
}

int main()
{
	Array<std::string, 2> data;
	data[0] = "Hello";
	data[1] = "World";

	{
		Vector<Vector3> vector;
		vector.EmplaceBack(1.0f, 2.0f, 3.0f);
		vector.EmplaceBack(4.0f, 5.0f, 6.0f);
		vector.EmplaceBack(7.0f, 8.0f, 9.0f);
		vector.PopBack();
		vector.PopBack();
		vector.EmplaceBack(10.0f, 11.0f, 12.0f);
		vector.EmplaceBack(13.0f, 14.0f, 15.0f);
		vector.EmplaceBack(16.0f, 17.0f, 18.0f);
		vector.EmplaceBack(19.0f, 20.0f, 21.0f);


		PrintVector(vector);
		vector.Clear();
		PrintVector(vector);
	}

	Vector<int> intVector;
	intVector.PushBack(1);
	intVector.PushBack(2);
	intVector.PushBack(3);
	intVector.EmplaceBack(4);
	intVector.EmplaceBack(5);
	intVector.PopBack();
	intVector.PopBack();
	intVector.EmplaceBack(6);
	
	PrintVector(intVector);
	intVector.Clear();
	PrintVector(intVector);
	


	std::cin.get();
}