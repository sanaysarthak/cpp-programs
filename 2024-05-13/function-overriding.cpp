// Function Overriding

#include <iostream>
using namespace std;

class ABC {
    public:
        void display() {
            cout << "This is parent class." << endl;
        }
};

class XYZ : public ABC {
    public:
        // overrides the display() method of class ABC
        void display() {
            cout << "This is child class." << endl;
        }
};

int main() {
    XYZ x;
    x.display(); // method of class XYZ invokes, instead of class ABC
    x.ABC::display(); // using scope resolution operator to access the display function of the base class
    return 0;
}
