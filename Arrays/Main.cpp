#include <iostream>




int main() {

	int example[5]; // allocated a block of memory for 5 integers on the stack
	for (int i = 0; i < 5; i++) { // loop through the array and set each element to i + 1 (1, 2, 3, 4, 5)
		example[i] = i + 1;
		std::cout << example[i] << std::endl;
	}

	
	int* another = new int[5]; // allocated a block of memory for 5 integers on the heap
	for (int i = 0; i < 5; i++) { // loop through the array and set each element to i + 1 (1, 2, 3, 4, 5)
		another[i] = i + 1;
		std::cout << another[i] << std::endl;
	}

	
	delete[] another; // delete the block of memory on the heap
	std::cin.get();
}