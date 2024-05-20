#include <iostream>
using namespace std;

class Base {
    public:
        int b;
        // only add the prefix virtual in the base class method
        virtual void show() {
            cout << "b = " << b << endl;
        }
};

class Derv1 : public Base {
    public:
        void show() {
            cout << "Derv1." << endl;
        }
};

class Derv2 : public Base {
    public:
        void show() {
            cout << "Derv2." << endl;
        }
};

int main() {
    Derv1 dv1;
    Derv2 dv2;
    Base *ptr;
    ptr = &dv1;
    ptr -> show();
    ptr = &dv2;
    ptr -> show();
    return 0;
}
