// Example of double pointer code in C++

#include <iostream>
using namespace std;

int main() {
    int a = 25;
    int *p, **s;
    p = &a;
    s = &p;
    cout << "*p = " << *p << endl; // 25
    cout << "*s = " << *s << endl; // address of a stored in p
    cout << "**s = " << **s << endl; // 25
    cout << "*(*(&p)) = " << *(*(&p)) << endl; // 25
    // cout << "***(s) = " << ***(s) << endl; // 25 (editor giving error)
    return 0;
}