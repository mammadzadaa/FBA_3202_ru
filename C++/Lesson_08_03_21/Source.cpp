#include<iostream>
using namespace std;

int main()
{
	char** arr = new char* [5]{};
	//cout << sizeof(arr) << endl;
	arr[0] = _strdup("Hello");
	arr[1] = _strdup(" ");
	arr[3] = _strdup("world");
	arr[4] = _strdup("!");

	cout << arr[0][1] << endl;
	return 0;
}