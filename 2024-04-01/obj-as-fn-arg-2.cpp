// Define class Complex with members real and imaginary. Also define function to setdata() to initialize the members, print() to display values and addnumber() that adds two complex objects.
// Demonstrate concept of passing object as argument.

#include <iostream>
using namespace std;

class Complex {
	private:
		int real, imag;
	public:
		void set_data() {
			cout << "\nEnter real part of number : ";
			cin >> real;
			cout << "Enter imaginary part of number : ";
			cin >> imag;	
		}
		void addComplexNos(Complex c1, Complex c2) {
			real = c1.real + c2.real;
			imag = c1.imag + c2.imag;
		}
		void displaySum() {
			cout << "Sum = " << real << "+" << imag << "i";
		} 
};

int main() {

	Complex c1, c2, c3;

	c1.set_data();
	c2.set_data();
    
    	c3.addComplexNos(c1, c2);
    	cout << "\nAfter adding two objects:-" << endl;
    	c3.displaySum();

	return 0;
}
