#include <iostream>
using namespace std;

int main() 
{
    int a = 5;
    int &ans = a; // ans will become the alias of a
    // for the same address, we will have two names or another name, that is known as reference name
    // this is how we have to explain it in the exam if a question comes
    cout << a << endl;
    cout << &a << endl;
    cout << ans << endl;
    cout << &ans << endl;
    cout << ans++ << endl;
    cout << a << endl;
    cout << ans << endl;
    return 0;
}
