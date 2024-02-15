// Using increment and decrement operators (postfix and prefix) in C++

// VS Code and other online compilers are giving the output as : 749735
// However, the correct output should be : 742735  (The correct output is only being shown in cpp.sh)

#include <iostream>
using namespace std;

int main() 
{
    int x, y;

    x = 5;
    y = ++x * ++x;
    cout << x << y;

    x = 5;
    y = x++ * ++x;
    cout << x << y;

    return 0;
}
