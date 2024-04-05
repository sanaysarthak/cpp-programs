// Program in C++ to add two data members from two different classes using friend function

#include <iostream>
using namespace std;

class B; // forward declaration of class B, without which the compiler will give error at line -- for unknown B

class A {
	private:
		int n1;
	public:
		void set_data() {
			n1 = 10;
		}
		friend int add(A, B);

};

class B {
	private:
		int n2;
	public:
		void set_data() {
			n2 = 20;
		}
		friend int add(A, B);

};

int add(A a, B b) {
	return (a.n1 + b.n2);
}

int main() {
	A objA;
	B objB;
	objA.set_data();
	objB.set_data();

	cout << add(objA, objB);

	return 0;
}
