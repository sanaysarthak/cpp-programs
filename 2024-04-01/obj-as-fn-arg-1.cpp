// Passing object as function arguments

#include <iostream>
using namespace std;

class Time {
	int hour, minute, second;
	public:
		void getTime() {
			cout << "Enter hour: ";
			cin >> hour;
			cout << "Enter minute: ";
			cin >> minute;
			cout << "Enter second: ";
			cin >> second;
		}
		void printTime() {
			cout << "\nHour: " << hour;
			cout << "\nMinute: " << minute;
			cout << "\nSecond: " << second << "\n\n";
		}
		void addTime(Time x, Time y) {
			hour = x.hour + y.hour;
			minute = x.minute + y.minute;
			second = x.second + y.second;
		}
};

int main() {
    Time t1, t2, t3;

    t1.getTime();
    t1.printTime();

    t2.getTime();
    t2.printTime();

    t3.addTime(t1, t2);
    cout << "After adding two objects:-" << endl;
    t3.printTime();

    return 0;
}
