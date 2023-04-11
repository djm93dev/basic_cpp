#pragma once

template<typename Vector>
class VectorIterator
{

public:
	using ValueType = typename Vector::ValueType;
	using PointerType = ValueType*;
	using ReferenceType = ValueType&;
public:
	VectorIterator(PointerType ptr)
		: m_Ptr(ptr) {}

	VectorIterator& operator++()
	{
		m_Ptr++;
		return *this;
	}
	
	VectorIterator operator++(int)
	{
		VectorIterator iterator = *this;
		++(*this);
		return iterator;
	}

	VectorIterator& operator--()
	{
		m_Ptr--;
		return *this;
	}

	VectorIterator operator--(int)
	{
		VectorIterator iterator = *this;
		--(*this);
		return iterator;
	}

	ReferenceType operator[](int index)
	{
		return *(m_Ptr + index);
	}
	
	PointerType operator->()
	{
		return m_Ptr;
	}
	
	ReferenceType operator*()
	{
		return *m_Ptr;
	}
	
	bool operator==(const VectorIterator& other) const
	{
		return m_Ptr == other.m_Ptr;
	}
	
	bool operator!=(const VectorIterator& other) const
	{
		return !(*this == other);
	}


private:
	PointerType m_Ptr;

	
};

template<typename T>
class Vector
{
	
public:
	using ValueType = T;
	using Iterator = VectorIterator<Vector<T>>;

	
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

	Iterator begin()
	{
		return Iterator(m_Data);
	}

	Iterator end()
	{
		return Iterator(m_Data + m_Size);
	}

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
