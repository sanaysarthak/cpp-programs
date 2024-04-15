#include <iostream>
using namespace std;

class Complex {
	private:
		int real, imag;

	public:
		Complex(int r=0, int i=0) {
			real = r;
			imag = i;
		}
		void display() {
			cout << "\n" << real << "+i" << imag;
		}
		friend Complex operator +(Complex c1, Complex c2);
};

// friend function (not a method of the class)
Complex operator +(Complex c1, Complex c2) {
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.imag = c1.imag + c2.imag;
	return temp;
}

int main() {
	Complex c1(5,3);
	Complex c2(10,5);
	Complex c3;
	c1.display();
	cout << " + ";
	c2.display();
	cout << " = ";
	c3 = c1 + c2;
	c3.display();
	return 0;
}
