// Define class Time with members hour, minute and second. Also define methods name setTime() to initialize the members, print() to display time. Demonstrate class Time for two objects.

#include <iostream>
using namespace std;

class Time
{
	private:
		int hour;
		int minute;
		int second;

	public:
		void setTime(int, int, int);
		void print();
};

void Time :: setTime(int h, int m, int s)
{
	hour = h;
	minute = m;
	second = s;
}

void Time :: print()
{
	cout << "Hour = " << hour << endl;
	cout << "Minute = " << minute << endl;
	cout << "Second = " << second << endl;
}

int main()
{
	Time t1;
	t1.setTime(12, 22, 35);
	t1.print();
	return 0;
}
