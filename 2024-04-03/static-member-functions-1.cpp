// static member functions can access only static members of the class
// static member functions can be invoked using class name, not object
// there cannot be static and non-static version of the same function.
// we can only use static variables in the static method

// they cannot be virtual
// they cannot be declared as constant or volatile
// a static member function does not have THIS pointer

#include <iostream>
using namespace std;

	private:
        int number;
        static int count;
    public:
        void getData(int a)
        {
            number = a;
            count++;
        }
        static void getCount() // adding the static keyword as prefix
        {
            cout << "Value of Count = " << count << endl;
        }
};

int Item :: count;

int main()
{
    Item a, b, c;
    
    a.getData(100);
    Item :: getCount();

    b.getData(200);
    Item :: getCount();
    
    c.getData(300);
    Item :: getCount();
    
    return 0;
}
