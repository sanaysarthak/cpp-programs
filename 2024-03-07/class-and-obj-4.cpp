// Write a C++ program to create class Employee having data members Emp_name, Salary and Age
// create member functions SetData() and DisplayData() and create two objects of the class Employee

#include <iostream>
using namespace std;

class employee {
  private:
    string empName;
    int salary;
    int age;
  public:
    void setData() {
      cout << "Enter Employee name: ";
      cin >> empName;
      cout << "Enter salary: ";
      cin >> salary;
      cout << "Enter age: ";
      cin >> age;
    }
    void displayData() {
      cout << "\nEmployee Name: " << empName;
      cout << "\nSalary: " << salary;
      cout << "\nAge: " << age << endl << "\n";
    }
};

int main() {
  employee e1, e2;
  e1.setData();
  e1.displayData();
  e2.setData();
  e2.displayData();
  return 0;
}
