// my soln - not working

/* You are tasked with developing a student management system for a school.
The system should allow users to perform various operations such as adding new students, updating student information, deleting student records, and displaying student details.
Each student record should contain the student's name, roll number, and marks obtained in different subjects. The system should also calculate the percentage of each student based on their marks.
Additionally, the system should keep track of the total number of student records stored in the system. Implement the system using object-oriented programming concepts in C++. */

#include <iostream>
#include <string>
using namespace std;

class Student {
	private:
		string name;
		int rollNumber;
		int marks[3];

	public:
		float percentage;

		Student(string n = "", int rollNo = 0, int m[] = {0}) : name(n), rollNumber(rollNo), marks[]= m[] {}
		void addStudent() {
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter roll number: ";
			cin >> rollNumber;
			cout << "Enter marks in 3 subjects: " << endl;
			for(int i=0; i<3; i++) {
				cin >> marks[i];
			}
		}

		float calcPercentage() {
			int sum = 0;
			for(int i=0; i<3; i++) {
				sum += marks[i];
			}
			percentage = (sum/3) * 100.0;
			return percentage;
		}

		void displayStudents() {
			cout << "Name: " << name << ", Roll Number: " << rollNumber << endl;
			cout << "Marks: " << marks[0] << " " << marks[1] << " " << marks[2] << endl;
			cout << "Percentage: " << calcPercentage();
		}

		~Student() {} // Destructor
};

int main() {
	const int size = 100;
	Student student[size];
	int totalStudents = 1;
	int ch;
	int i = 0;
	do {
		cout << "\n1. Add Student. \n2. Display Students. \n0. Exit. \nEnter choice: ";
		cin >> ch;
		cout << "\n";
		switch(ch) {
			case 1:
				student[i].addStudent();
				totalStudents++;
				break;

			case 2:
				student[i].displayStudents();
				break;

			case 0:
				cout << "Exited the program successfully." << endl;
				break;

			default:
				cout << "Enter the correct choice." << endl;
				break;
		} 
		i++;
	} while(ch != 0);

	return 0;
}
