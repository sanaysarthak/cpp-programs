// complete this

#include <iostream>
using namespace std;

class Base {
    public:
        void showBase() {
            cout << "Base" << endl;
        }
};

class Derv1 : public Base {
    public:
        void showDerived() {
            cout << "Derv1" << endl;
        }
};

int main() {
    Derv1 dv1;
    Base *ptr;
    ptr = &dv1;
    ptr -> showBase();
    ptr -> showDerived(); // error
    return 0;
}