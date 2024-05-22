// multiple catch example

#include <iostream>
using namespace std;

void test(int x) {
    try {
        if(x == 1)
            throw x;
        else if(x == 0)
            throw 'x';
        else if(x == -1)
            throw 5.14;
    }
    
    catch(int i) {
        cout << "Caught an integer." << endl;
    }
    
    catch(char ch) {
        cout << "Caught a character." << endl;
    }
    
    catch(double i) {
        cout << "Caught a double." << endl;
    }
}

int main() {
    test(1);
    test(0);
    test(-1);
    return 0;
}
