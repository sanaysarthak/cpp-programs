/* Create a C++ class Student with private data members name, rollNumber, and grade. 
Implement public member functions setData() to set thte data members, displayData() to display the data members, and calculateGrade() to calculate the grade based on marks obtained. 
Ensure that name and rollNumber are private while grade is public. */

#include <iostream>
#include <string>
using namespace std;

class Student {
	private:
		string name;
		int rollNumber;

	public:
		char grade;

		void setData() {
			cout << "\nEnter name: ";
			cin >> name;
			cout << "Enter roll number: ";
			cin >> rollNumber;
		}

		void calculateGrade() {
			int marks;
			cout << "Enter marks: ";
			cin >> marks;	
			if(marks >= 90)
				grade = 'O';
			else if(marks >= 80 && marks < 90)
				grade = 'A';
			else if(marks >= 70 && marks < 80)
				grade = 'B';
			else if(marks >= 60 && marks < 70)
				grade = 'C';
			else if(marks >= 55 && marks < 60)
				grade = 'D';
			else if(marks >= 50 && marks < 55)
				grade = 'E';
			else
				grade = 'F';
		}

		void displayData() {
			cout << "\nName: " << name << endl;
			cout << "Roll Number: " << rollNumber << endl;
			cout << "Grade: " << grade << endl;
 		}
};

int main() {
	int size;
	cout << "Enter no. of students: ";
	cin >> size;
	Student student[size];
	for(int i=0; i<size; i++) {
		student[i].setData();
		student[i].calculateGrade();
		student[i].displayData();
	}
	return 0;
}
