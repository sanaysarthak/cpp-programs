#include <iostream>
using namespace std;

class Item
{
    private:
        int number;
        static int count;
    public:
        void getData(int a)
        {
            number = a;
            count++;
        }
        void getCount()
        {
            cout << "Value of Count = " << count << endl;
        }
};

int Item :: count;

int main()
{
    Item a, b, c;
    
    a.getData(100);
    a.getCount();

    b.getData(200);
    b.getCount();
    
    c.getData(300);
    c.getCount();
    
    return 0;
}
