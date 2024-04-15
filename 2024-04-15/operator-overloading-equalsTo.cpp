// Perform operator overloading on Binary operator == to check whether two objects are equal or not.
// Simply, just check a single data member

// Program in C++ to overload a binary operator

#include <iostream>
using namespace std;

class Complex {
	private:
		int real, imag;

	public:
		Complex(int x=0, int y=0) {
			real = x;
			imag = y;
		}
		void display() {
			cout << "\nReal value= " << real << endl;
			cout << "Imaginary value= " << imag << endl;
		}
		int operator == (Complex);
};

int Complex :: operator == (Complex c) {
	if((real == c.real) && (imag == c.imag))
		return 1;
	else
		return 0;
}

int main() {
	Complex c1(5,3);
	Complex c2(5,3);
	if(c1 == c2)
		cout << "True! objects are equal.";
	else 
		cout << "False! objects are not equal.";
	return 0;
}
