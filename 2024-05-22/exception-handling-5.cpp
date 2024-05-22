// user defined exception

#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception {
    public:
        const char* what() const throw() {
            return "Attempted to divide by zero!\n";
        }
};

int main() {
    try {
        int x, y;
        cout << "Enter first number: ";
        cin >> x;
        cout << "Enter second number: ";
        cin >> y;
        if(y == 0) {
            MyException z;
            throw z;
        }
        else {
            cout << "Division: " << x/y << endl;
        }
    }

    catch(exception &e) {
        cout << e.what();
    }

    return 0;
}
