#include <iostream>
#include <string>
#include <memory>


struct AllocationMetrics
{
	uint32_t allocCount = 0;
	uint32_t deallocCount = 0;

	uint32_t currentAllocCount() { return allocCount - deallocCount; }

};

static AllocationMetrics s_AllocationMetrics;

void* operator new(size_t size) // new operator overload
{
	s_AllocationMetrics.allocCount += size;
	return malloc(size);
}

void operator delete(void* memory, size_t size) // delete operator overload
{
	s_AllocationMetrics.deallocCount += size;
	free(memory);
}

struct Object
{

	int x, y, z;

	Object()
	{
		x = 0;
		y = 0;
		z = 0;
	}
};

static void PrintMemoryUsage()
{
	std::cout << "Current allocation count: " << s_AllocationMetrics.currentAllocCount() << std::endl;
}


int main()
{
	PrintMemoryUsage();
	{
		Object* obj = new Object();
		PrintMemoryUsage();
		delete obj;
		PrintMemoryUsage();
		std::unique_ptr<Object> obj2 = std::make_unique<Object>();
		PrintMemoryUsage();
	}

	PrintMemoryUsage();

	std::cin.get();
}