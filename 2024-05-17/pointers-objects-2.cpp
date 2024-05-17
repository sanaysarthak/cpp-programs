// Example-2 of Pointers to Objects in C++

#include <iostream>
using namespace std;

class Demo {
    private:
        int i;

    public:
        Demo(int x) {
            i = x;
        }
        int print_data() {
            return i;
        }
};

int main() {
    Demo d(55);
    Demo *ptr;
    ptr = &d;
    cout << ptr -> print_data();
    return 0;
}