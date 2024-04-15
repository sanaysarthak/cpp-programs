// Operator overloading is a compile time polymorphism. (It means that, the function calling is done at the compile time itself)
// Program in C++ to overload a binary operator

#include <iostream>
using namespace std;

class Complex {
	private:
		int real, imag;

	public:
		Complex() {
			real = 0;
			imag = 0;
		}
		Complex(int x, int y) {
			real = x;
			imag = y;
		}
		void display() {
			cout << "\nReal value= " << real << endl;
			cout << "Imaginary value= " << imag << endl;
		}
		Complex operator +(Complex);
};

Complex Complex :: operator+(Complex c) {
	Complex temp;
	temp.real = real + c.real;
	temp.imag = imag + c.imag;
	return temp;
}

int main() {
	Complex c1(4,6);
	Complex c2(7,9);
	Complex c3;
	c3 = c1 + c2;
	c1.display();
	c2.display();
	c3.display();
	return 0;
}
