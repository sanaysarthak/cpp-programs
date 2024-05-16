// Constructor of Base class is Parameterized

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