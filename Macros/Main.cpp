#include <iostream>
#include <string>

#ifdef PR_DEBUG
#define LOG(x) std::cout << x << std::endl; // find cout << x << endl; with LOG(x) - shouldnt use this but it works
#else
#define LOG(x)
#endif



#define WAIT std::cin.get(); // find cin.get(); with WAIT - shouldnt use this but it works


int main()
{


	LOG("Daniel")
	WAIT
}