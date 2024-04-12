#include <iostream>
using namespace std;

class Rectangle {
	private:
		double length;
		double width;

	public:
		// Rectangle(double l = 0, double w = 0) {} // Default constructor
		Rectangle(double l = 0, double w = 0) : length(l), width(w) {} // Default constructor with default initialization

		void setDimensions(double l, double w) {
			length = l;
			width = w;
		}

		double area() const {
			return length * width;
		}
};

int main() {
	const int size = 3; // Number of objects to be created
	Rectangle rectangles[size]; // Array of Rectangles objects
	// Set dimensions for each rectangle
	rectangles[0].setDimensions(5.0, 3.0);
	rectangles[1].setDimensions(4.0, 4.0);
	rectangles[2].setDimensions(6.0, 2.5);
	// Display area of each rectangle
	for(int i=0; i<size; i++) {
		cout << "Rectangle " << i+1 << " Area: " << rectangles[i].area() << endl;
	}
	return 0;
}
