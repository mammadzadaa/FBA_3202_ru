#include<iostream>
using namespace std;

struct Engine
{
	char* name;
	int bhp;
};

struct Car
{
	char* mark;
	char* model;
	int age;
	Engine* engine;

};

int main()
{
	char* s1 = _strdup("Salam");
	char* s2 = _strdup(" Dunya!");

	int size = strlen(s1) + strlen(s2) + 1;

	char* arr = new char[size] {};
	strcat_s(arr,size,s1);
	strcat_s(arr, size, s2);

	cout << arr << endl;

	//FILE* ft;
	////fopen_s(&ft,"file.txt","w"); // w r a w+ r+ 
	//const char* f_name = _strdup("file.txt");
	//fopen_s(&ft, f_name, "r");
	//char* buf = new char[255]{};
	//if (ft != nullptr)
	//{
	//	//fputs("Hello World!",ft);
	//	fseek(ft,2,SEEK_SET);
	//	fgets(buf,255,ft);
	//	fclose(ft);
	//}
	//	cout << buf;

	/*Engine** engines = new Engine * [5];
	engines[0] = new Engine();
	engines[0]->name = _strdup("GJ");
	engines[0]->bhp = 100;
	cout << "Select engine:";
	int selectione = 0;
	cin >> selectione;
	Car* car = new Car;
	car->engine = engines[selectione];
	cout << endl << car->engine->name << " " << car->engine->bhp;*/

	return 0;
}