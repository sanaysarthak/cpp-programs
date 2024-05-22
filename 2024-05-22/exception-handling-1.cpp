// try block -> detects and throws an exception (throw is in the try block)
// catch block -> catches and handles the exception

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    try {
        if(b != 0) {
            c = a/b;
            cout << "a/b = " << c;
        }
        else
            throw(b);
    }

    catch(int x) {
        cout << "Exception caught: Divide by zero\n";
    }
    
    return 0;
}
