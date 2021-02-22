#include<iostream>
using namespace std;

//void foo(int num)
//{
//	num++;
//}

//void foo(int& num)
//{
//	num++;
//}
//
//void foo(int* ptr) //F0FFCCDF
//{
//	(*ptr)++;
//}

//void foo_c(const int* ptr)
//{
//	(*ptr)++; // error
//}

void foo(int*& ptr)
{
	ptr = new int(10);
}

int main()
{
	cout << foo << endl;

	/*int x = 5;
	int* ptr = &x;*/
	//foo(x);
	//foo(10);
	//foo(&x);

	/*foo(ptr);
	cout << *ptr;*/

	//int num = 5;

	//int* ptr = &num;
	//*ptr += 5;
	//cout << *ptr;

	//int num = 5;
	//int num_2 = 10;
	//const int* ptr = &num; // pointer to constant
	//*ptr += 5; //error

	//ptr = &num_2;
	//cout << *ptr;

	//int num = 5;
	//int num_2 = 10;
	//int* const ptr = &num; // constant pointer
	//*ptr += 5;

	//ptr = &num_2; // error
	//cout << *ptr;


	//int num = 5;
	//int num_2 = 10;
	//const int* const ptr = &num; // constant pointer to constant
	//*ptr += 5; //error

	//ptr = &num_2; // error
	//cout << *ptr;

	//int num = 5;
	//int& link = num; // similar to constant pointer (int* const link)

	//link += 5;
	//int num_2 = 8;

	//link = num_2;
	//cout << num << endl;
	//int* ptr = &link;
	//*ptr += 10;
	//cout << num;
	//cout << endl << num_2;

	return 0;
}