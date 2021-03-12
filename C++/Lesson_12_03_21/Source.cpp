#include <iostream>
using namespace std;

template<typename T>
T* array_mem(int size)
{
	if (size > 0)
	{
		return new T[size]{};
	}
	else
	{
		return nullptr;
	}
}

int main()
{
	char** s = new char* [5]{};
	s[0] = new char[]{"Lambarguni"};
	s[1] = new char[] {"OMG"};
	s[2] = new char[] {"TBH"};
	s[3] = new char[] {"1"};
	s[4] = new char[] {"LOL"};

	delete[] s[0];

	s[0] = new char[] {"Hello"};

	char** temp = new char* [6]{};
	for (size_t i = 0; i < 5; i++)
	{
		temp[i] = s[i];
	}
	temp[5] = new char[] {"Biznes kishi"};
	delete[] s;
	s = temp;

	int* num = new int[]{1,2,3,4,5,6};

	 int * t = num + 3;
	 int n = t - num;

	return 0;
}