// Using Bitwise operators in C++ and performing the following operations using it.
// Bitwise AND, Bitwise OR, Bitwise Left, Bitwise Right

#include <iostream>
using namespace std;
int main()
{
    int a=8, b=6, c;
    c = a & b;
    cout << "Bitwise AND : " << c << endl;
    
    c = a | b;
    cout << "Bitwise OR : " << c << endl;
    
    c = a << 1; // bitwise left
    cout << "Bitwise Left : " << c << endl;

    c = a >> 1; // bitwise right
    cout << "Bitwise Right : " << c << endl;
    
    return 0;
}
