#pragma once

template<typename T>
class Vector
{
public:
	Vector()
	{

		// allocate memory for the array
		ReAllaoc(2);
		
		
	}
	
	~Vector()
	{
		Clear();
		::operator delete(m_Data, m_Capacity * sizeof(T));
	}

	void PushBack(const T& value)
	{
		// check if we have enough space
		if (m_Size >= m_Capacity)
		{
			// allocate new memory
			ReAllaoc(m_Capacity + m_Capacity / 2);
		}

		// add new element
		m_Data[m_Size] = value;
		m_Size++;
	}


	void PushBack(T&& value)
	{
		// check if we have enough space
		if (m_Size >= m_Capacity)
		{
			// allocate new memory
			ReAllaoc(m_Capacity + m_Capacity / 2);
		}

		// add new element
		m_Data[m_Size] = std::move(value);
		m_Size++;
	}

	template<typename... Args>
	T& EmplaceBack(Args&&... args)
	{
		// check if we have enough space
		if (m_Size >= m_Capacity)
		{
			// allocate new memory
			ReAllaoc(m_Capacity + m_Capacity / 2);
		}

		// add new element
		new(&m_Data[m_Size]) T(std::forward<Args>(args)...);
		m_Size++;

		return m_Data[m_Size - 1];
	}

	void PopBack()
	{
		if (m_Size > 0)
		{
			m_Size--;
			m_Data[m_Size].~T();
		}
	}

	void Clear()
	{
		for (size_t i = 0; i < m_Size; i++)
		{
			m_Data[i].~T();
		}

		m_Size = 0;
	}
	
	const T& operator[](size_t index) const
	{

		
		return m_Data[index];
	}
	
	T& operator[](size_t index)
	{

		
		return m_Data[index];
	}

	size_t Size() const { return m_Size; }
	
private:
	void ReAllaoc(size_t newCapacity)
	{
		// allocate new memory
		T* newBlock = (T*)::operator new(newCapacity * sizeof(T));
		
		if (newCapacity < m_Size)
		{
			m_Size = newCapacity;
		}
		
		// move old data to new memory
		for (size_t i = 0; i < m_Size; i++)
		{
			newBlock[i] = std::move(m_Data[i]);
		}

		for (size_t i = 0; i < m_Size; i++)
		{
			m_Data[i].~T();
		}
		
		// delete old memory
		::operator delete(m_Data, m_Capacity * sizeof(T));

		// set new memory
		m_Data = newBlock;
		m_Capacity = newCapacity;
	}
	
private:
	T* m_Data = nullptr;
	size_t m_Size = 0;
	size_t m_Capacity = 0;







	
};

