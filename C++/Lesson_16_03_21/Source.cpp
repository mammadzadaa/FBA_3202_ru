#include<iostream>
using namespace std;

//struct Date
//{
//	int month;
//	double day;
//	int year;
//};

struct B
{
	char ch;
};

struct A
{
	char a;
	int b;
	B* another;
};
int main()
{
	A aftandil;
	aftandil.a;

	A* ptr = new A;
	ptr->a = 'h';
	ptr->b;
	ptr->another = new B;
	ptr->another->ch = 'a';
	cout << ptr->a;
	cout << ptr->another->ch;

	/*cout << sizeof(A) << endl;*/
	return 0;
}