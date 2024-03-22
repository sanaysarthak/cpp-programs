// Define class Rectangle with members width and height. Also define methods named set_values() to initialize the members, area() to calculate area. Demonstrate class Rectangle for two objects.

#include <iostream>
using namespace std;

class Rectangle
{
	private:
		int width;
		int height;

	public:
		void set_values(int, int);
		void area();
};

void Rectangle :: set_values(int w, int h)
{
	width = w;
	height = h;
}

void Rectangle :: area()
{
	int area = width * height;
	cout << "Area = " << area << endl;
}

int main()
{
	Rectangle r1, r2;
	r1.set_values(10, 20);
	r1.area();

	r2.set_values(15, 8);
	r2.area();
	return 0;
}
