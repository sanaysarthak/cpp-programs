// Example code of using pointers with objects in C++
// Arrow operator is used to access data members and functions when using pointers to functions

#include <iostream>
using namespace std;

class ABC {
    public:
        int a = 50;
};

int main() {
    ABC ob1;
    ABC *ptr; // ABC type pointer
    ptr = &ob1;
    cout << ob1.a << endl; 
    cout << ptr -> a; // arrow operator is used
}