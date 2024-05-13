// virtual base class is used to prevent the duplication/ambiguity.
#include <iostream>
using namespace std;

class A {
    public:
        int i;
};

// it can also be written as 'public virtual'
class B : virtual public A {
    public:
        int j;
};

class C : virtual public A {
    public:
        int z;
};

class D : public B, public C {
    public:
        int sum;
};

int main() {
    D ob;
    ob.i = 10;
    ob.j = 20;
    ob.z = 30;
    ob.sum = ob.i + ob.j + ob.z;
    cout << ob.sum;
    return 0;
}
