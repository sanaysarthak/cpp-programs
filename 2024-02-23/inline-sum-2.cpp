#include <iostream>
using namespace std;

inline void printSum(int num1, int num2) {
    cout << num1 + num2 << endl;
}

int main() {
    // Call the inline function
    printSum(10, 20); // first call
    printSum(2, 5); // second call
    printSum(100, 400); // third call
    return 0;
}
