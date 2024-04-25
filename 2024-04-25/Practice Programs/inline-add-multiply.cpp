// Write an inline function to multiply, and to add two numbers

#include <iostream>
using namespace std;

inline int add(int a, int b)
{
int sum = a + b;
return sum;
}

inline int mul(int a, int b)
{
int prod = a * b;
return prod;
}

int main() 
{
int a, b;
cout << "Enter a : ";
cin >> a;
cout << "Enter b : ";
cin >> b;
cout << "Addition using Inline Function: " << add(a, b) << endl;
cout << "Multiplication using Inline Function: " << mul(a, b) << endl;
return 0;
}
