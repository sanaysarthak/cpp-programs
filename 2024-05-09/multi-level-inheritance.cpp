#include <iostream>
using namespace std;

class Person {
    public:
        void display1() {
            cout << "\nPerson Class";
        }
};

class Student : public Person {
    public:
        void display2() {
            cout << "\nStudent Class";
        }
};

class ITStudent : public Student {
    public:
        void display3() {
            cout << "\nITStudent Class";
        }
};

int main() {
    Person p;
    Student s;
    ITStudent i;
    p.display1();
    s.display1();
    s.display2();
    i.display1();
    i.display2();
    i.display3();
    return 0;
}
