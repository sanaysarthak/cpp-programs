// also known as "do nothing function"
// it would be simply empty function.
// it is just for denoting that it is the in the program.

// the type of class will also be known as abstract class
// it will be always declared inside the base class
// it's initialization should be there in every derived class

#include <iostream>
using namespace std;

class Shape {
    protected:
        float x;
    public:
        void get_data() {
            cout << "Enter x: ";
            cin >> x;
        }
};

class Square : public Shape {
    public:
        float calculateArea() {
            return x*x;
        }
};

class Circle : public Shape {
    public:
        float calculateArea() {
            return 3.14*x*x;
        }
};

int main() {
    Square s;
    Circle c;
    cout << "Enter length to calculate the area of a square: " << endl;
    s.get_data();
    cout << "Area of square: " << s.calculateArea() << endl;
    cout << "Enter radius to calculate the area of a circle: " << endl;
    c.get_data();
    cout << "Area of circle: " << c.calculateArea() << endl;
    return 0;
}
