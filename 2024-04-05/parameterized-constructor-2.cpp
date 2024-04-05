/* Create a class named Distance having data members feet and inch. 
Create parameterized constructor to initialize the members feet and inch. */

#include <iostream>
using namespace std;

class Distance {
	private:
		int feet, inch;
	public:
		Distance(int f, int i) {
			feet = f;
			inch = i;
			cout << "Distance Constructor called!";
		}
};

int main() {
	Distance d1(10, 120);
	return 0;
}
