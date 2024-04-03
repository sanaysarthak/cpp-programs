#include <iostream>
using namespace std;

class Student
{
    public:
        static int total; // Declare a static variable
        Student()
        {
            total += 1; // Increment the total for each Student object created
        }
};

int Student :: total = 0; // Initialize the static variable

int main()
{
    Student s1;
    cout << "Number of students = " << s1.total << endl;

    Student s2;
    cout << "Number of students = " << s2.total << endl;
    
    Student s3;
    cout << "Number of students = " << s3.total << endl;
    
    return 0;
}
