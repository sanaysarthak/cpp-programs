// Derived class constructor
// An example code to showcase what will happen when your parent (base) class will have a constructor, and tben the child (derived) class object is created.
// When an object of the derived class is created, it first calls the constructor of the base class, and then the constructor of its own class at the end.
// It is done to initialize the data members from the parent (base) class first, in case they are needed in the child (derived) class, as we are inheriting them

#include <iostream>
using namespace std;

class Base {
    private:
        int x;
    public:
        Base() {
            cout << "Base Default Constructor" << endl;
        }
};

class Derived : public Base {
    private:
        int y;
    public:
        Derived() {
            cout << "Derived Default Constructor" << endl;
        }
        Derived(int i) {
            cout << "Derived Parameterized Constructor" << endl;
        }
};

int main() {
    Base b;
    Derived d1;
    Derived d2(10);
    return 0;
}
