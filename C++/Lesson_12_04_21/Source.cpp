#include<iostream>
using namespace std;

struct Person
{
	char* name;
	char* surname;
	int age;
};

int main()
{
	/*Person p;
	p.name = _strdup("Aftandil");
	p.surname = _strdup("Mammadov");
	p.age = 45;*/

	FILE* ft;
	fopen_s(&ft, "person.bin", "rb");
	if (ft != nullptr)
	{
		Person p;
		int nlen;
		fread(&nlen, sizeof(int), 1, ft);
		p.name = new char[nlen + 1]{};
		fread(p.name, sizeof(char), nlen, ft);
		int slen;
		fread(&slen, sizeof(int), 1, ft);
		p.surname = new char[slen + 1]{};
		fread(p.surname, sizeof(char), slen, ft);
		fread(&p.age,sizeof(int),1,ft);

		cout << "Name: " << p.name << endl;
		cout << "Surname: " << p.surname << endl;
		cout << "Age: " << p.age << endl;

	}
	

	//fopen_s(&ft,"person.bin","wb");
	//if (ft != nullptr)
	//{
	//	int nlen = strlen(p.name);
	//	fwrite(&nlen,sizeof(int),1,ft);
	//	fwrite(p.name, sizeof(char), nlen, ft);
	//	int slen = strlen(p.surname);
	//	fwrite(&slen, sizeof(int), 1, ft);
	//	fwrite(p.surname, sizeof(char), slen, ft);
	//	fwrite(&p.age, sizeof(int), 1, ft);
	//	fclose(ft);
	//}

	//FILE* ft;
	//fopen_s(&ft,"file.step","wb"); // rb, wb, ab, rb+, wb+
	//int num = 10;
	//if (ft != nullptr)
	//{
	//	fwrite(&num,sizeof(int),1,ft);
	//}

	//FILE* ft;
	//fopen_s(&ft, "file.step", "rb"); // rb, wb, ab, rb+, wb+
	//int num;
	//if (ft != nullptr)
	//{
	//	fread(&num, sizeof(int), 1, ft);
	//	cout << num;
	//}
	



	//FILE* ft;
	//fopen_s(&ft,"my.txt","r+"); // r , w , a , r+ , w+
	//if (ft != nullptr)
	//{
	//	fseek(ft, -5, SEEK_END);
	//	fputc('A', ft);
	//	fputs("Hello",ft);
	//}

	//FILE* ft;
	//fopen_s(&ft, "my.txt", "r+"); // r , w , a , r+ , w+
	//if (ft != nullptr)
	//{
	//	fseek(ft, -5, SEEK_END);
	//	fgetc(ft);
	//	char* buf = new char[255]{};
	//	fgets(buf,255,ft);
	//}


	


	return 0;
}
