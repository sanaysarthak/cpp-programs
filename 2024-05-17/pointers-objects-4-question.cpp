/* Create a class student having private data members marks and name, and public data members rollno, and member functions get_data(), and print_data().
Demonstrate the concept of pointers to class members for array of 3 objects */

#include <iostream>
using namespace std;

class Student {
    private:
        string name;
        int marks;

    public:
        int roll_no;

        void get_data() {
            cout << "Enter name: ";
            getline(cin, name);
            cout << "Enter roll no: ";
            cin >> roll_no;
            cout << "Enter marks: ";
            cin >> marks; 
            cin.ignore();
        }

        void print_data() {
            cout << "\nName : " << name << endl;
            cout << "Roll No. : " << roll_no << endl;
            cout << "Marks : " << marks << endl;
        }
};

int main() {
    Student s[3];
    Student *ptr = s;
    // Student *ptr = &s[0];
    for(int i=0; i<3; i++) {
        cout << "Student " << i+1 << endl;
        ptr -> get_data();
        ptr -> print_data();
        cout << "\n\n";
    }
    return 0;
}