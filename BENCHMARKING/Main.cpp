#include <iostream>
#include <memory>
#include <chrono>
#include <array>


class Timer
{
public:
	Timer()
	{
		m_StartTime = std::chrono::high_resolution_clock::now();
	}
	
	~Timer()
	{
		Stop();
	}

	void Stop()
	{
		auto endTimepoint = std::chrono::high_resolution_clock::now();

		auto start = std::chrono::time_point_cast<std::chrono::microseconds>(m_StartTime).time_since_epoch().count();
		auto end = std::chrono::time_point_cast<std::chrono::microseconds>(endTimepoint).time_since_epoch().count();
		
		auto duration = end - start;
		double ms = duration * 0.001;
		
		std::cout << duration << "us (" << ms << "ms)" << std::endl;
		
		
	}


private:
	std::chrono::time_point<std::chrono::high_resolution_clock> m_StartTime;

};


int main()
{

	struct Vec2
	{
		float x, y;
	};
	
	std::cout << "Make Shared\n";
	{
		std::array<std::shared_ptr<Vec2>, 1000> sharedPtrs;
		Timer timer;
		for (int i = 0; i < sharedPtrs.size(); i++)
		{
			sharedPtrs[i] = std::make_shared<Vec2>();
		}
	}

	std::cout << "New Shared\n";
	{
		std::array<std::shared_ptr<Vec2>, 1000> sharedPtrs;
		Timer timer;
		for (int i = 0; i < sharedPtrs.size(); i++)
		{
			sharedPtrs[i] = std::shared_ptr<Vec2>(new Vec2());
		}
	}
	
	std::cout << "Make Unique\n";
	{
		std::array<std::unique_ptr<Vec2>, 1000> sharedPtrs;
		Timer timer;
		for (int i = 0; i < sharedPtrs.size(); i++)
		{
			sharedPtrs[i] = std::make_unique<Vec2>();
		}
	}




	int value = 0;
	{
		Timer timer;
		for (int i = 0; i < 1000000; i++)
		{
			value += 2;

		}
	}
	std::cout << value << std::endl;
	__debugbreak();
}