#include <iostream>
#include <limits>

using namespace std;

struct NameOfStruct
{
	int i;
	double d;
	struct AnotherStruct
	{
		int u;
	};
	AnotherStruct s;
};

union NameOfUnion
{
	int a;
	int b;
	char c;
};

enum Gender
{
	Male, Female
};

struct Pet
{
	char* nick_name;
	char* type;
	int age;
	Gender gender;
};

Pet* GetPetInfo()
{
	Pet* p = new Pet;
	cout << "Insert Pet Name: ";
	char* name = new char[255]{};
	cin.getline(name,255);
	p->nick_name = _strdup(name);
	delete[] name;
	cout << "\nInsert Pet Type: ";
	name = new char[255]{};
	cin.getline(name, 255);
	p->type = _strdup(name);
	delete[] name;
	cout << "\nInsert Pet Age in Month: ";
	cin >> p->age;
	int s;
	do
	{
		cout << "\nSelect Pet Gender \n1 - Male\n2 - Female\nYour Selection: ";
		cin >> s;
		switch (s)
		{
		case 1:
			p->gender = Gender::Male;
			break;
		case 2:
			p->gender = Gender::Female;
			break;
		}

	} while (s > 2 && s < 1);
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	return p;
}

void PrintPets( Pet** pets, size_t size)
{
	cout << endl;
	for (size_t i = 0; i < size; i++)
	{
		cout << "Name: " << pets[i]->nick_name << "\nType: " << pets[i]->type;
		cout << "\nAge: " << pets[i]->age << " months\n";
		switch (pets[i]->gender)
		{
		case Male:
			cout << "Gender is Male\n";
			break;
		case Female:
			cout << "Gender is Female\n";
			break;
		}
		cout << endl;
	}
}

int main()
{
	size_t size = 3;
	Pet** pets = new Pet*[size]{};
	for (size_t i = 0; i < size; i++)
	{
		pets[i] = GetPetInfo();
	}
	PrintPets(pets,size);


	//NameOfUnion u;
	//u.a = 5;
	//u.b = 75;
	////u.c = 'A';

	//cout << u.a << endl;
	//cout << u.b << endl;
	//cout << u.c << endl;
	//cout << sizeof(u) << endl;

	//NameOfStruct::AnotherStruct a;
	//NameOfStruct s;
	
	

	return 0;
}