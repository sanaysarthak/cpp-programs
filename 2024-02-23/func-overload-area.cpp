// Write a C++ program to demonstrate function overloading. Create a function area() which calculates the area of circle, triangle and box

#include <iostream>
using namespace std;

#define PI 3.14

void area(int r) {
    cout << "Area of Circle : " << PI*r*r << endl;
}

void area(int b, int h) {
    cout << "Area of Triangle : " << 0.5*b*h << endl;
}

void area(int length, int breadth, int height) {
    cout << "Area of Cube : " << length*breadth*height << endl;
}

int main() {
    int r = 10;
    int b = 10, h = 2;
    int length = 10, breadth = 20, height = 3;

    area(r);
    area(b, h);
    area(length, breadth, height);
    return 0;
}
