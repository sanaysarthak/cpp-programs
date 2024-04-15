// Unary Operator Overloading program in C++ 
// Overload the unary operator "-", to negate the data members of the object

#include <iostream>
using namespace std;

class Complex {
	private:
		int a, b;

	public:
		Complex(int x=0, int y=0) {
			a = x;
			b = y;
		}
		void show_data() {
			cout << "a = " << a << "\nb = " << b << endl;
		}
		Complex operator -();
};

Complex Complex :: operator -() {
	Complex temp;
	temp.a = -a;
	temp.b = -b;
	return temp;
}

int main() {
	Complex c1(3,4), c2;
	// c2 = -c1; and c2 = c1.operator-(); both are totally same
	c2 = -c1;
	c2.show_data();
	return 0;
}
