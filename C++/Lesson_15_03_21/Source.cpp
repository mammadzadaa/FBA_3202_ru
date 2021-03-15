#include<iostream>
#include<string.h>
using namespace std;

enum Sex
{
	Male, Female, Other
};

struct DateOfBirth
{
	int Day;
	int Month;
	int Year;
};

struct Person
{
	char* name;
	Sex sex;
	int age;
	float weight;
	DateOfBirth birthday;
};

void print_person(const char* const name, const Sex sex, const  int age, const float weight)
{
	cout << "Person:\nName: " << name << "\nAge: " << age << "\nWeight: " << weight << " kg\nSex: ";
	switch (sex)
	{
	case Male:
		cout << "Male\n";
		break;
	case Female:
		cout << "Female\n";
		break;
	case Other:
		cout << "Other\n";
		break;
	}
}

void print_person(const Person person)
{
	cout << "Person:\nName: " << person.name << "\nAge: " << person.age << "\nWeight: " << person.weight << " kg\nSex: ";
	switch (person.sex)
	{
	case Male:
		cout << "Male\n";
		break;
	case Female:
		cout << "Female\n";
		break;
	case Other:
		cout << "Other\n";
		break;
	}
}

void print_person(const Person* const persons, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << "Person:\nName: " << persons[i].name << "\nAge: " << persons[i].age << "\nWeight: " << persons[i].weight << " kg\nSex: ";
		switch (persons[i].sex)
		{
		case Male:
			cout << "Male\n";
			break;
		case Female:
			cout << "Female\n";
			break;
		case Other:
			cout << "Other\n";
			break;
		}

		cout << "\n-----------------------------------------------------\n\n";
	}
}

int main()
{
	

	/*Person p;

	p.name = _strdup("Heraculus");
	p.age = 3000;
	p.weight = 123.3;
	p.sex = Sex::Male;

	print_person(p);*/

	size_t size = 3;
	Person* p_ptr = new Person[size]{};

	p_ptr[0].name = _strdup("Hercules");
	p_ptr[0].age = 3000;
	p_ptr[0].weight = 123.3;
	p_ptr[0].sex = Sex::Male;

	p_ptr[1].name = _strdup("Bob");
	p_ptr[1].age = 3;
	p_ptr[1].weight = 0.2;
	p_ptr[1].sex = Sex::Other;

	p_ptr[2].name = _strdup("Kitana");
	p_ptr[2].age = 27;
	p_ptr[2].weight = 52.2;
	p_ptr[2].sex = Sex::Female;

	print_person(p_ptr, size);



	/*char* name;
	Sex sex;
	int age;
	float weight;

	name = _strdup("Aftandil");
	sex = Sex::Male;
	age = 25;
	weight = 82.5;

	print_person(name,sex,age,weight);*/

	//char* name;

	//char* buffer = new char[255]{};

	//cin.getline(buffer, 255);

	//name = _strdup(buffer);

	//// strset(buffer, 0);
	// _strset_s(buffer,255,0);

	//delete[] buffer;

	return 0;
}

// -32 + 45 - 12 * 2

// Array for Numbers: -32 , 45, 24
// Array for Operators: +, -