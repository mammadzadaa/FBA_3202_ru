#include<iostream>
using namespace std;

struct Employer
{
	char* name;
	char* position;
	double salary;
};

struct Company
{
	char* company_name;
	int year_of_establishment;
	int number_of_employers;
	Employer** employers;
	
};

void add_employer(Company& company)
{
	Employer** arr = new Employer * [company.number_of_employers + 1]{};
	for (size_t i = 0; i < company.number_of_employers; i++)
	{
		arr[i] = company.employers[i];
	}
	Employer* temp = new Employer;
	
	cout << "Enter Employer name: ";
	char* buf = new char[255]{};
	cin.getline(buf,255);
	temp->name = _strdup(buf);

	cout << "Enter Employer position: ";
	delete[] buf;
	buf = new char[255]{};
	cin.getline(buf, 255);
	temp->position = _strdup(buf);
	delete[] buf;

	cout << "Enter Employer salary: ";
	cin >> temp->salary;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	arr[company.number_of_employers++] = temp;

	if (!company.employers)
	{
		delete[] company.employers;
	}

	company.employers = arr;
}

void print_company_info(Company company)
{
	cout << endl <<"Company Name: " << company.company_name << endl;
	cout << "Company Year of Establishment: " << company.year_of_establishment << endl;
	cout << "Company Number of Employers: " << company.number_of_employers << endl;
	cout << "Company Employers: \n\n";
	for (size_t i = 0; i < company.number_of_employers; i++)
	{
		cout << "\tEmployers Name: " << company.employers[i]->name << endl;
		cout << "\tEmployers Position: " << company.employers[i]->position << endl;
		cout << "\tEmployers Salary: " << company.employers[i]->salary << " AZN\n\n";
	}
	
}

void write_company_to_file(Company company, char* file_name)
{

}

Company read_company_from_file(char* file_name)
{

}

int main()
{
	Company step;
	step.company_name = _strdup("Step IT Academy");
	step.number_of_employers = 0;
	step.employers = nullptr;
	step.year_of_establishment = 1999;
	
	int num = 0;
	cout << "Enter number of employers you want to add: ";
	cin >> num;
	cin.ignore(numeric_limits<streamsize>::max(),'\n');

	for (size_t i = 0; i < num; i++)
	{
		add_employer(step);
	}

	print_company_info(step);

	return 0;
}