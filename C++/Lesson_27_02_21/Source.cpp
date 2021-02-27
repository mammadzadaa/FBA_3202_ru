#include<iostream>
using namespace std;

void f(int*& p)
{
	p = nullptr;
}
void fc(int** const p)
{
	*p = nullptr;
}
void foo_ptr(int* const num)
{
	(*num)++;
}
void foo_ref(int& num)
{
	num++;
}

//int foo()
//{
//	cout << "Hello\n";
//	return 0;
//}
//void func(int** num)
//{
//	cout << **num << " number\n";
//}
//
//void arr_create(size_t size, int*& arr)
//{
//	arr = new int[size] {};
//}
//
//void arr_fill(size_t size, int*& arr)
//{
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = rand() % 20;
//	}
//}
//
//void arr_show(size_t size, int*& arr)
//{
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}

//void sort(int(*compare)(const void*,const void*),int*arr, size_t size)
//{
//	compare();
//}
//
//int compareDescending(const void* a, const void* b)
//{
//}

void arr(void(*print)(size_t,int*), size_t size)
{
	int* arr = new int[size] {};
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
	print(size, arr);
}

void aftandil(size_t size, int* arr)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void print_with_n(size_t size, int* arr)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << i + 1 << ": " << arr[i] << endl;
	}
	cout << endl;
}

int main()
{
	arr(aftandil, 10);

	/*int* arr = new int[10]{};
	sort(compareDescending,arr,10);*/



	//qsort(arr,10,sizeof(int),compare);

	//srand(time(NULL));
	//int(*foo_p)() = foo;
	//void(*foo_v)(int**) = func;
	//int n = 3;
	//int* pt = &n;
	//foo_p();
	//foo_v(&pt);

	/*const size_t fs = 3;
	void(*arr_foo[fs])(size_t,int*&);

	arr_foo[0] = arr_create;
	arr_foo[1] = arr_fill;
	arr_foo[2] = arr_show;

	size_t size = 5;
	int* arr = nullptr;

	for (size_t i = 0; i < fs; i++)
	{
		arr_foo[i](size,arr);
	}*/


	/*int n = 5;
	foo_ptr(&n);
	foo_ref(n);
	int* p = &n;
	f(p);
	fc(&p);
*/

	//int* const ptr ; // 

	//const int* ptr1;
	//const int* const ptr2;

}