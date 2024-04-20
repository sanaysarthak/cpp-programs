// Overloading Pre and post increment/decrement operators
// Using the unary operator ++

#include <iostream>
using namespace std;

class Number {
	private:
		int m;

	public:
		Number() {
			m = 0;
		}
		Number(int x) {
			m = x;
		}
		void operator++() {
			++m;
			cout << "Pre-Increment = " << m << endl;
		}
		void operator++(int) {
			m++;
			cout << "Post-Increment = " << m << endl;
		}
};
int main() {
	Number n1(5);
	++n1;
	n1++;
	return 0;
}
