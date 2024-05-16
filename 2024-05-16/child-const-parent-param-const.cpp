// child-const-parent-param-const.cpp
// child-constructor-and-parent-parameterized-constructor.cpp

// An example code for writing child (derived) class constructor when the parent (base) class is having parameterized constructor

#include <iostream>
using namespace std;

class Base {
    private:
        int x;
    public:
        Base(int i) {
            x = i;
            cout << "x = " << x << endl;
        }
};

class Derived : public Base {
    private:
        int y;
    public:
        Derived(int i, int j) : Base(j) {
            y = i;
            cout << "y = " << y;
        }
};

int main() {
    Derived d(10, 20);
    return 0;
}
