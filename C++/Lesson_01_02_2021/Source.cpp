#include<iostream>

using namespace std;

//
//namespace My
//{
//	void foo()
//	{
//		return;
//	}
//}

void foo1() 
{
	foo1(); // recurtion
}

int foo()
{
	if(!"Afti")
	return 0;

	cout << "Won't appear!\n";
	return -1;
}

void A();
void B();
void C();



void A()
{
	cout << "A finished!\n";
}

void B()
{
	cout << "Call A\n";
	A();
	cout << "B finished!\n";
}

void P(int);

void C()
{
	cout << "Call B\n";
	B();
	cout << "C finished!\n";
}

int Factorial(int num)
{
	if (num == 1)
	{
		return 1;
	}
	
	return num * Factorial(num - 1);
}

int main()
{
	cout << Factorial(3) << endl;


	//cout << "Call C\n";
	//C();
	//cout << "Main finished!\n";
	//P(0);
	//foo1();
	//{
	//	int a = 5;
	//	cout << a << endl;
	//}
	//cout << foo() << endl;
	////My::foo();
	//std::cout << "Hello" << std::endl;

	return 0;
}

void P(int x)
{
	cout << "P\n";
}