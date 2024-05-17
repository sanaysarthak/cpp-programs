// Important from exam POV
// It is used when instance (class) variable name, and parameterized (local [main]) variables are same. Then, in this case, the compiler gets confused, and cannot understand which variable is which.

#include <iostream>
using namespace std;

class Sample {
    private:
        int a, b;
    
    public:
        void get_data(int a, int b) {
            this -> a = a;
            this -> b = a - b; // -3
        }
        void print_data() {
            cout << "a = " << a << endl;
            cout << "b = " << b << endl;
        }
};

int main() {
    Sample ob1;
    int a = 5, b = 8;
    ob1.get_data(a, b);
    ob1.print_data();
    return 0;
}
