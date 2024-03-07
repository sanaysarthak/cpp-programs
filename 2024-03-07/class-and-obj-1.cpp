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
            marks = 270;
            spi = 6.5;
        }
        void displayData() {
            cout << "Marks = " << marks << endl;
            cout << "SPI = " << spi << endl;
        }
};

int main() {
    Test t1;
    t1.setData();
    t1.displayData();
    return 0;
}
