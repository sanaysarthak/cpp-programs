// Two attributes of class will be converted into one unit

/* Class to Class type casting can be achieved by both ways
1) use of constructor
2) use of casting operator */

#include <iostream>
using namespace std;

class Time {
    private:
        int hrs, min;
    
    public:
        Time(int h, int m) {
            hrs = h;
            min = m;
        }
        int getMinutes() {
            int tot_min = (hrs * 60) + min;
            return tot_min;
        }
        void display() {
            cout << "Hours: " << hrs << endl;
            cout << "Minutes: " << min << endl;
        }
};

class Minute {
    private:
        int min;

    public:
        Minute() {
            min = 0;
        }
        void operator=(Time T) {
            min = T.getMinutes();
        }
        void display() {
            cout << "\nTotal Minutes: " << min << endl;
        }
};

int main()
{
    Time t1(2, 30);
    t1.display();

    Minute m1;
    m1.display();

    m1 = t1; // Conversion from Time to Minute

    t1.display();
    m1.display();
    return 0;
}
