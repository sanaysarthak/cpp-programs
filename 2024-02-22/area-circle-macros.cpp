#include <iostream>
#define PI 3.14
int r;
#define area(r) (PI*r*r)

using namespace std;

int main() {
    int r;
    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area for circle with radius " << r << " is : " << area(r) << endl; // the function call will be replaced by the preorocessor directive
    return 0;
}
