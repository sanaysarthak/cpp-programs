// write a c++ program to demonstrate function overloading. Create a function display() with different arguments but same name.

#include <iostream>
using namespace std;

void display(int a) {
    cout << a << endl;
}
void display(int b, int c) {
    cout << b << " " << c << endl;
}

int main() {
    int a = 10, b = 20, c = 30;
    display(a);
    display(b, c);
    return 0;
}
