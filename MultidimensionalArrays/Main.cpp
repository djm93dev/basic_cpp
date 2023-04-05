#include <iostream>

int main()
{

	
	int** array2d = new int* [50]; // allocate 50 int* on the heap (each int* is a pointer to an int)

	for (int i = 0; i < 50; i++)
	{
		array2d[i] = new int[50]; // allocate 50 int arrays on the heap for each int* in array2d
	}

	int*** array3d = new int** [50]; // allocate 50 int** on the heap (each int** is a pointer to an int*)
	
	for (int i = 0; i < 50; i++)
	{
		array3d[i] = new int* [50]; // allocate 50 int* arrays on the heap for each int** in array3d
		for (int j = 0; j < 50; j++)
		{
			array3d[i][j] = new int[50]; // allocate 50 int arrays on the heap for each int* in array3d[i]
		}
	}

	// loop through and delete each int array in array3d
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			delete[] array3d[i][j];
		}
	}
	
	// loop through and delete each int* array in array3d
	for (int i = 0; i < 50; i++)
	{
		delete[] array3d[i];
	}
	
	// delete array3d
	delete[] array3d;

	// loop through and delete each int array in array2d
	for (int i = 0; i < 50; i++)
	{
		delete[] array2d[i];
	}
	
	// delete array2d
	delete[] array2d;
	

	int* array1d = new int[25]; // allocate 25 ints on the heap
	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y < 5; y++)
		{
			array1d[x + y * 5] = x + y * 5; // set the value of each int in array1d
		}
	}

	// loop through and print each int in array1d
	
	for (int i = 0; i < 25; i++)
	{
		std::cout << array1d[i] << std::endl;
	}


	std::cin.get();
}