#include <iostream>
#include <string>



class String
{
public:
	String() = default;
	String(const char* string)
	{
		printf("Created!\n");
		m_Size = strlen(string);
		m_Data = new char[m_Size];
		memcpy(m_Data, string, m_Size);
	}

	String(const String& other)
		: m_Size(other.m_Size)
	{
		printf("Copied!\n");
		m_Data = new char[m_Size];
		memcpy(m_Data, other.m_Data, m_Size);
	}

	String(String&& other) noexcept
	{
		printf("Moved!\n");
		m_Data = other.m_Data;
		m_Size = other.m_Size;

		other.m_Data = nullptr;
		other.m_Size = 0;
	}

	~String()
	{
		printf("Destroyed!\n");
		delete[] m_Data;
	}

	void Print() const
	{
		for (unsigned int i = 0; i < m_Size; i++)
			std::cout << m_Data[i];
		std::cout << std::endl;
	}


private:
	char* m_Data;
	unsigned int m_Size;
};

class Entity
{
public:
	Entity(const String& name)
		: m_Name(name)
	{
		
	}

	Entity(String&& name)
		: m_Name((String&&)name)
	{

	}

	void PrintName() const
	{
		m_Name.Print();
	}

private:
	String m_Name;
};
	

int main()
{
	Entity entity("Daniel");
	entity.PrintName();
	


	std::cin.get();
}