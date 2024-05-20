#include <iostream>
using namespace std;

class Base {
    public:
        int b;
        void show() {
            cout << "b = " << b << endl;
        }
};

class Derived : public Base {
    public:
        int d;
        void show() {
            cout << "d = " << d << endl;
        }
};

int main() {
    Base B1;
    Derived D1;
    Base *bptr;
    bptr = &B1;
    cout << "Base class pointer assigned address of base class object." << endl;
    bptr -> b = 100;
    bptr -> show();
    
    bptr = &D1;
    bptr -> b = 200;
    cout << "Base class pointer assigned address of derived class object." << endl;
    bptr -> show();
    
    Derived *dptr;
    dptr = &D1;
    cout << "Derived class pointer assigned address of derived class object." << endl;
    dptr -> b = 300; // check whether it should be 'b' or 'd'
    dptr -> show();
    return 0;
}
