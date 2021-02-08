#include <iostream>

void PrintArray(int arr[], size_t size)
{
	if (size == 0)
	{
		return;
	}
	PrintArray(arr,size - 1);
	std::cout << arr[size - 1] << " ";
}

void FillArray(int arr[], size_t size)
{
	if (size == 0)
	{
		return;
	}
	FillArray(arr, size - 1);
	 arr[size - 1] = rand() % 100;
}