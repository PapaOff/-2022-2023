#include <iostream>

using namespace std;

struct Person
{
	char* name;
	int age;
	double salary;
};

void printPeople(Person* people, int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << people[i].name << " is " << people[i].age << " years old and makes $" << people[i].salary << "\n";
	}
}

int main()
{
	int n;
	cin >> n;

	Person* people = new Person[n];
	for (size_t i = 0; i < n; i++)
	{
		cout << "Person[" << i << "].name = ";
		char buffer[255];
		cin.ignore();
		cin.getline(buffer, 255);
		people[i].name = new char[strlen(buffer) + 1];
		strcpy(people[i].name, buffer);

		cout << "Person[" << i << "].age = ";
		cin >> people[i].age;
		cout << "Person[" << i << "].salary = ";
		cin >> people[i].salary;
	}

	printPeople(people, n);
}
