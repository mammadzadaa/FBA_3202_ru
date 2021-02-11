#include<iostream>
using namespace std;

//void foo(int a)
//{
//	cout << ++a << endl;
//}
//
//void foo(int* a)
//{
//	cout << ++(*a) << endl;
//}

void PrintNumber(int ** num)
{
	if (*num != nullptr)
	{
		cout << "Your number is " << **num << endl;
		*num = nullptr;
		return;
	}
	cout << "There is no number!\n";
}

int main()
{
	int* ptr = nullptr;
	int number = 5;
	ptr = &number;
	PrintNumber(&ptr);
	PrintNumber(&ptr);



	//int num = 6;
	//cout << num << endl;
	//foo(num);
	//foo(&num);
	//cout << num << endl;


	/*int num = 5;
	int* ptr = &num;
	int arr[5]{10,20,30,40,50};*/

	//int** ptr_to_ptr = &ptr;
	//int*** ptr_to_ptr_to_ptr = &ptr_to_ptr;

	/*cout << &num << endl;
	cout << ptr << endl;

	cout << *ptr << endl;
	cout << arr << endl;
	cout << *arr << endl;
	cout << *(arr + 10) << endl;
	num = 6;
	cout << *(arr + 10) << endl;*/

	//cout << *(int*)((char*)arr + 8) << endl;

	return 0;
}