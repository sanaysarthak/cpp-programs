#include <iostream>
#include <string>
using namespace std;

class Student {
	private:
		int rollNo;
		string name;
		double fees;

	public:
		Student() {
			cout << "Enter the Roll No: ";
			cin >> rollNo;
			cout << "Enter Name: ";
			cin >> name;
			cout << "Enter the Fees: "; 
			cin >> fees;
		}

		void display() {
			cout << "\n" << rollNo << "\t" << name << "\t" << fees "\n";
		}
};

int main() {
	Student s1;
	s1.display();
	Student s2;
	s2.display();
	return 0;
}
