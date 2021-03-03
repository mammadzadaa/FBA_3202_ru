#include<iostream>
using namespace std;

/*void foo(int* a, const int* b, int* const c, const int* const d)
{
	*a = 9;
	a = nullptr;

	*b = 9;
	b = nullptr;

	*c = 9;
	c = nullptr;

	*d = 9;
	d = nullptr;
}*/	

//void foo(int a, short b)
//{}
//
//void booble_sort(int(*compare)(int,int),int* arr, size_t size)
//{
//	if (compare(arr[i], arr[i + 1]) > 0)
//	{
//		//swap
//	}
//}
//
//int isfendiyar(const int a,const int b)
//{
//	if (a < 0 && b < 0)
//	{
//		return b - a;
//	}
//	else if (a > 0 && b > 0)
//	{
//		return a - b;
//	}
//	else if (a > 0 && b < 0)
//	{
//		return 1;
//	}
//	else if(a < 0 && b > 0)
//	{
//		return -1;
//	}
//	return 0;
//}
//
//int israfil(int a, int b)
//{
//	return a - b;
//}
//
//int aftandil(int a, int b)
//{
//	if (a > b)
//	{
//		return 1;
//	}
//	else if(b > a)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}

int lenth(const char* const str)
{

	for (int i = 0;; i++)
	{
		if (str[i] == '\0')
		{
			return i;
		}
	}
	//char* temp = (char*)str;
	//int size = 0;
	//while (*temp != '\0')
	//{
	//	size++;
	//	temp++;
	//}
	//return size;
}

char* my_strdup(const char* const str)
{
	int size = lenth(str);
	char* temp = new char[++size]{};
	for (size_t i = 0; i < size; i++)
	{
		temp[i] = str[i];
	}
	return temp;
}

int main()
{
	//char* arr = new char[4]{};
	//arr[0] = 'a';
	//arr[1] = 'b';
	//arr[2] = 'c';
	//arr[3] = '\0';

	int size = lenth("Hello"); // your func
	int size1 = strlen("Hello"); // ready func

	cout << size << endl;

	char* name = my_strdup("Aftandil");
	cout << name;

	//char* ptr = _strdup("Hello World!");
	//cout << arr << endl;
	//printf("%p\n",arr);
	//int num = 10;
	//printf("Hello World! %d\n",num);

	/*void(*name)(int, short);
	name = foo;
	int arr[10]{};
	booble_sort(israfil, arr, 10);*/

	/*int num = 0;
	int* ptr = &num;
	foo(ptr,ptr,ptr,ptr);*/

	return 0;
}