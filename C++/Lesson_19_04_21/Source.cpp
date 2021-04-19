#include<iostream>
#include<bitset>
using namespace std;

struct Cat
{
	char* pet_name;
	int age;
};

void print_cat(Cat cat)
{
	cout << "Cat name: " << cat.pet_name << endl;
	cout << "Age of cat is: " << cat.age << endl;
}

struct Person
{
	char* name;
	short state;
};

char* Encryptor(char* str, char key)
{

}

char* Decriptor(char* str, char key)
{

}



int main()
{
	/*short working = 8;
	short male = 4;
	short study = 2;
	short married = 1;

	int num = 1234;
	int key = 234;

	int encripted = num ^ key;
	int decripted = encripted ^ key;

	cout << "Number: \t" <<  bitset<8>(num) << endl;
	cout << "Key: \t\t" << bitset<8>(key) << endl;
	cout << "Encripted: \t" << bitset<8>(encripted) << endl;*/

	//cout << encripted << endl;
	//cout << decripted << endl;


	/*Person p;
	p.name = _strdup("Aftandil");
	p.state = 0;
	cout << bitset<8>(p.state) << endl;
	p.state |= married;
	cout << bitset<8>(p.state) << endl;
	p.state |= study;
	cout << bitset<8>(p.state) << endl;
	

	if (p.state & study)
	{
		cout << p.name << " is educated!" << endl;
	}
	else
	{
		cout << p.name << " is not educated!" << endl;

	}

	return 0;*/

	int a = 14;
	int b = 19;

	cout << "\t" << bitset<8>(a) << endl;
	cout << "<<4\t";
	cout << bitset<8>(a<<4) << endl << endl;

	cout << "\t" << bitset<8>(a) << endl;
	cout << ">>2\t";
	cout << bitset<8>(a >> 2) << endl;

	//cout << "\t" << bitset<8>(a) << endl;
	//cout << "~\t";
	//cout << bitset<8>(~a) << endl;


	//cout << bitset<8>(a) << endl;
	//cout << "^\n";
	//cout << bitset<8>(b) << endl;
	//cout << "=\n";
	//cout << bitset<8>(a ^ b) << endl;


	/*cout << bitset<8>(a) << endl;
	cout << "|\n";
	cout << bitset<8>(b) << endl;
	cout << "=\n";
	cout << bitset<8>(a | b) << endl;*/

	/*cout << bitset<8>(a) << endl;
	cout << "&\n";
	cout << bitset<8>(b) << endl;
	cout << "=\n";
	cout << bitset<8>(a & b) << endl;*/



	///*Cat barsik;
	//barsik.pet_name = _strdup("Barsik");
	//barsik.age = 3;*/

	//FILE* f;

	///*fopen_s(&f,"some.txt","wb");
	//if (f != nullptr)
	//{
	//	int len = strlen(barsik.pet_name);
	//	fwrite(&len,sizeof(int),1,f);
	//	fwrite(barsik.pet_name,sizeof(char),len,f);
	//	fwrite(&barsik.age,sizeof(int),1,f);
	//	fclose(f);
	//}*/

	//fopen_s(&f, "some.txt", "rb");
	//if (f != nullptr)
	//{
	//	Cat cat;
	//	int len;
	//	fread(&len,sizeof(int),1,f);
	//	cat.pet_name = new char[len + 1]{};
	//	fread(cat.pet_name,sizeof(char),len,f);
	//	fread(&cat.age, sizeof(int), 1, f);
	//	print_cat(cat);
	//	fclose(f);
	//}

	return 0;
}