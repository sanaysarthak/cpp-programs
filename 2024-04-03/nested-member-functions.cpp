// Program in C++ to implement nested member functions

#include <iostream>
using namespace std;

class Rectangle {
    private:
        int w, h;
    public:
        void set_value(int ww, int hh)
        {
            w = ww;
            h = hh;
            display_value();
        }
        void display_value()
        {
            cout << "Width = " << w;
            cout << "\nHeight = " << h;
        }
};

int main()
{
    Rectangle r1;
    //r1.set_value(5, 6);
    cout << "\n---------------\n";
    r1.display_value();
    return 0;
}
