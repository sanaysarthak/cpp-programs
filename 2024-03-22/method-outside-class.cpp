// No really sure about the exact question about this one!

#include <iostream>
using namespace std;

class Employee
{
	private:
		int age;
		int salary;

	public:
		void set_values(int, int);
		void print();
};

void Employee :: set_values(int a, int s)
{
	age = a;
	salary = s;
}

void Employee :: print()
{
	cout << "Age = " << age << endl;
	cout << "Salary = " << salary << endl;
}

int main()
{
	Employee emp1, emp2;
	emp1.set_values(24, 750000);
	emp1.print();

	emp1.set_values(45, 2345000);
	emp1.print();
	return 0;
}
