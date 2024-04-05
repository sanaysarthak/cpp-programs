// Create a simple class Person that that represents individuals with a name, age, and occupation. we'll include constructors to initialize these attributes, a copy constructor to duplicate a person. 
// To do later: Add a destructor to perform cleanup operation when a Person object is deleted.

#include <iostream>
#include <string>
using namespace std;

class Person {
	private:
		string name, occupation;
		int age;
	public:
		Person() {
			cout << "Enter name: ";
			getline(cin, name);
			cout << "Enter age: ";
			cin >> age;
			cout << "Enter occupation: ";
			cin.ignore();
			getline(cin, occupation);
		}

		Person(Person &p) {
			name = p.name;
			age = p.age;
			occupation = p.occupation;
			cout << "Printing using copy constructor.\n";
		}

		void display() {
			cout << name << " is " << age << " years old, and works as a " << occupation << ".\n" << endl; 
		}
};

int main() {
	Person p1;
	p1.display();
	Person p2(p1);
	p2.display();
	return 0;
}
