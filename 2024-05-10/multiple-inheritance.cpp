// multiple parent class and only one child class

#include <iostream>
using namespace std;

class Liquid {
    public:
        void display1() {
            cout << "Liquid Class" << endl;
        }
};

class Fuel {
    public:
        void display2() {
            cout << "Fuel Class" << endl;
        }
};

class Petrol : public Liquid, public Fuel {
    public:
        void display3() {
            cout << "Petrol Class" << endl;
        }
};

int main() {
    Liquid l;
    Fuel f;
    Petrol p;
    l.display1();
    f.display2();
    p.display3();
    p.display2();
    p.display1();
    return 0;
}
