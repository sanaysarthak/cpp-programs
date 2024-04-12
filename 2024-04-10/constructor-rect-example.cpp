// Program to create a class Rectangle having data members length and width. Demonstrate default, parameterized and copy constrcitor to initialize members and also demonstrate constructor overloading
#include <iostream>
using namespace std;

class Rectangle {
	private:
		int length, width;

	public:
		// Default Constructor (initializing the values with 0)
		Rectangle() {
			int length = 0;
			int width = 0;
			cout << "Default Constructor." << endl;
			cout << length << "\t" << width << "\n" << endl;
		}

		// Parametrized Constructor
		Rectangle(int x, int y) {
			int length = x;
			int width = y;
			cout << "Parametrized Constructor." << endl;
			cout << length << "\t" << width << "\n" << endl;
		}

		// Copy Constructor
		Rectangle(Rectangle &r) {
			int length = r.length;
			int width = r.width;
			cout << "Copy Constructor." << endl;
			cout << length << "\t" << width << "\n" << endl;
		}
		
};

int main() {
	Rectangle r1;
	Rectangle r2(5,6);
	Rectangle r3(r1);
	Rectangle r4 = r1;
	return 0;
}
