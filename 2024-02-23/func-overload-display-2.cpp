#include <iostream>
using namespace std;

void display(int var)
{
    cout << "int : " << var << endl;
}

void display(float var)
{
    cout << "float : " << var << endl;
}

void display(int var1, float var2)
{
    cout << "int : " << var1 << "\t\t" << "float : " << var2 << endl;
}

int main() {
    int iVar = 10;
    float fVar = 16.128;
    display(iVar);
    display(iVar, fVar);
    display(iVar, fVar);

    return 0;
}
