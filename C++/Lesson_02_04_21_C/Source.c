#include"stdio.h"

typedef struct Person
{
	char* name;
	char* surname;
	int age;
	void(*Print)(Person);
} Person;

void Print(Person p)
{
	printf("Name: %s\nSurname: %s\nAge: %d\n\n", p.name, p.surname, p.age);
}

int main()
{
	// struct Person p;
	Person p;
	p.Print = Print;

	p.name = _strdup("Afti");
	p.surname = _strdup("Mammadov");
	p.age = 45;
	p.Print(p);
	

	/*int num = 3;

	int d;

	int* ptr = malloc(sizeof(int));
	*ptr = 5;

	scanf_s("%d",&d);

	printf("Hello world! %d is my num %d\n%d",num,d,*ptr);*/


	return 0;
}