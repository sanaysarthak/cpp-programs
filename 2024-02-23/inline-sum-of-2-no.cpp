#include <iostream>
using namespace std;

inline int sum(int a, int b)
{
    return a+b;
}
int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "The sum of " << a << " and " << b << " is = " << sum(a, b);
    return 0;
}
