// Overloading the Unary decrement operator (--)

#include <iostream>
using namespace std;

class Number {
	private:
		int x, y, z;

	public:
		Number() {
			x = y = z =0;
		}
		Number(int a, int b, int c) {
			x = a;
			y = b;
			z = c;
		}
		void display() {
			cout << "\nx= " << x << ",\ty= " << y << ",\tz= " << z << endl;
		}
		void operator--();
};

void Number::operator--() {
	x = --x;
	y = --y;
	z = --z;
}

int main() {
	Number n1(5,4,3);
	n1.display();
	// n1.operator--();
	--n1;
	n1.display();
	return 0;
}
