#include<time.h>
#include<iostream>
using namespace std;

void PrintArray(int arr[], size_t size);
void FillArray(int arr[], size_t size);

//void foo(int a = 0, int b = 0) // default argument
//{
//	cout << "a: " << a << " b: " << b << endl;
//}

//void func()
//{
//	static int a = 5;
//	cout << a++ << endl;
//}

template<typename T>
void PrintArr(T arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template<>
void PrintArr(int arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " | ";
	}
	cout << endl;
}

//void PrintArr(int arr[], size_t size)
//{
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//void PrintArr(double arr[], size_t size)
//{
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}

int main()
{
	double arr[5]{ 1.1,2.1,3.5,4.3,5.9 };
	int arr1[5]{ 1,2,3,4,5 };
	char arr_char[5]{ 'a','b','c', 'd', 'e' };

	PrintArr(arr_char, 5);
	PrintArr<int>(arr1,5);

	/*func();
	func();
	func();*/

	//foo();
	//foo(1);
	//foo(1, 2);

	/*srand(time(NULL));

	const size_t size = 5;
	int arr[size];
	FillArray(arr, size);
	PrintArray(arr, size);*/

	//typedef int number;
	//number a;

	return 0;
}