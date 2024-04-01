// Returning an object from a function in C++

#include <iostream>
using namespace std;

class Time {
	private:
		int hour, minute, second;
	public:
		void getTime() {
			cout << "Enter hour: ";
			cin >> hour;
			cout << "Enter minute: ";
			cin >> minute;
		}
		void printTime() {
			cout << "\nHour: " << hour;
			cout << "\nMinute: " << minute;
		}
		Time addTime(Time t1, Time t2) {
			Time t4;
			t4.hour = t1.hour + t2.hour;
			t4.minute = t1.minute + t2.minute;
			return t4;
		}
};


/*int main() {
	Time t1, t2, t3, ans;

	t1.getTime();
	t1.printTime();

	t2.getTime();
	t2.printTime();

	ans = t3.addTime();
	cout << "After adding two objects, and returning it :-\n" << ans;

	return 0;
}*/

int main() {
	Time t1, t2, t3, ans;

	t1.getTime();
	t1.printTime();

	t2.getTime();
	t2.printTime();

	ans = t3.addTime(t1, t2);
	cout << "After adding two objects, and returning it :-\n";
	cout << ans.printTime();

	return 0;
}

// Do the same program for two complex numbers
