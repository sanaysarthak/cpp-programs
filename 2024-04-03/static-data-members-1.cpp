// static keyword is used as prefix
// it is initialized with 0
// its scoping is for the entire program, just like a global variable
// declare the static variable within the class, but define it outside the class

#include <iostream>
using namespace std;

class Demo
{
    private:
        static int count;
    public:
        void getCount()
        {
            cout << "Count = " << ++count << endl;
        }
};

int Demo :: count;

int main()
{
    Demo d1, d2, d3;
    d1.getCount();
    d2.getCount();
    d3.getCount();
    return 0;
}
