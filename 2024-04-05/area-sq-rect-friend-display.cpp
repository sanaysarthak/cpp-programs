  // Program : Friend function to another class. Find the area of a square and rectangle

#include <iostream>
using namespace std;

class Rectangle;

class Square {
	private:
		int side;
	public:
		void set_data();
		friend void printArea(Square, Rectangle);
};

class Rectangle {
	private:
		int length, breadth;
	public:
		void set_data();
		friend void printArea(Square, Rectangle);
};

void Square :: set_data() {
	cout << "Enter side of square: ";
	cin >> side;
}

void Rectangle :: set_data() {
	cout << "Enter length of rectangle: ";
	cin >> length;
	cout << "Enter breadth of rectangle: ";
	cin >> breadth;
}

void printArea(Square S, Rectangle R) {
	cout << "\nArea of Square is: " << S.side * S.side << endl;
	cout << "Area of Rectangle is: " << R.length * R.breadth << endl;
}

int main() {
	Square s1;
	Rectangle r1;
	s1.set_data();
	r1.set_data();
	printArea(s1, r1);
	return 0;
}
