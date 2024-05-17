// Example-3 of Pointers to Objects in C++
// Used array of objects in this example

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
    Demo d[3] = {55, 66, 77};
    Demo *ptr = d;
    // the above statement is similar to : *ptr = &d[0];
    for(int i=0; i<3; i++) {
        cout << ptr -> print_data() << endl;
        ptr++;
    }
}