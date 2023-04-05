#include <iostream>

int main()
{

	// int* array = new int[50]; // allocate 50 ints on the heap
	
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
	


	std::cin.get();
}