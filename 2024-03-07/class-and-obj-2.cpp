// Program in C++ to create a class Test having two data members marks and spi.
// Create member functions SetData() and DisplayData() to demonstrate class and objects.

#include <iostream>
using namespace std;

class Test {
    private:
        int marks;
        float spi;
    public:
        void setData() {
            cin >> marks;
            cin >> spi;
        }
        void displayData() {
            cout << "Marks = " << marks << endl;
            cout << "SPI = " << spi << endl;
        }
};

int main() {
    Test t1, t2;
    t1.setData();
    t1.displayData();
    t2.setData();
    t2.displayData();
    return 0;
}
