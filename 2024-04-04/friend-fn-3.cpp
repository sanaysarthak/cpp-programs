// Write a C++ program to find area of triangle and print it using friend function

#include <iostream>
using namespace std;

class Tri {
	private:
		int base, height;

	public:
		void set_data(int, int);
		friend void printArea(Tri);
};

void Tri :: set_data(int b, int h) {
	base = b;
	height = h;
}

void printArea(Tri T) {
	float area = (T.base * T.height * 0.5);
	cout << "Area of Triangle: " << area;
}

int main() {
	Tri T1;
	T1.set_data(10,10);
	printArea(T1);
	return 0;
}
