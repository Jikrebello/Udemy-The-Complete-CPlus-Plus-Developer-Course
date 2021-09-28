#include "DynamicallyAllocatedArrays.h"

DynamicallyAllocatedArrays::DynamicallyAllocatedArrays()
{
	int size = 0;
	cout << "Enter the size that you wish to make the array" << endl;
	cin >> size;
	
	int* myArray = new int[size];

	for (int i = 0; i < size; i++)
	{
		myArray[i] = i * 2;
	}

	for (int i = 0; i < size; i++)
	{
		cout << myArray[i] << endl;
	}

	delete[] myArray;
}
