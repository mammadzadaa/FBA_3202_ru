#include"MyFoo.h"
#include"MyFoo.h"
#include<iostream>

#define I int
#define MAX 256;


#if MAX > 0


#endif // 0


#define Release
#ifdef Debug

void func()
{
	std::cout << "Do something\n";
}

#endif // Debug
#ifdef Release
void func()
{
	static int num;
	std::cout << "Do something else\n";
}
#endif // Release

int f()
{
	return 3 + 4;
}

void foo();

int main()
{
	int z = f(); // int z = 7;

	int* ptr = new int(5);
	

	func();
	I a = MAX; // int a = 256;
	//MyFoo();
	//foo();
#include"MyHeader.h"