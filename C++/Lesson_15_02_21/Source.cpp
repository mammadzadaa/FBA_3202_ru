#include<iostream>
using namespace std;



int main()
{
	int* arr = new int[5]{ 1,2,3,4,5 };
	int* temp = new int[6]{};
	for (size_t i = 0; i < 5; i++)
	{
		temp[i] = arr[i];
	}
	temp[5] = 6;
	delete[] arr;
	arr = temp;

	/*int* ptr = new int;
	*ptr = 10;
	cout << *ptr << endl;
	cin.get();*/
	//while (true)
	//{
	//	double* p = new double[100000000];
	//	cin.get();
	//	cout << p << endl;
	//	delete[] p;
	//}

}