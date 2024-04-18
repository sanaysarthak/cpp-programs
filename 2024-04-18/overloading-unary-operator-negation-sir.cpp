// Unary Operator Overloading program in C++ 
// Overload the unary operator "-", to negate the data members of the object

#include <iostream>
using namespace std;

class Space {
	private:
		int x, y, z;

	public:
		Space() {
			x = y = z = 0;
		}
		Space(int a, int b, int c) {
			x = a;
			y = b;
			z = c;
		}
		void display() {
			cout << "\nx= " << x << ",\ty= " << y << ",\tz= " << z << endl;
		}
		void operator -();
};

void Space :: operator-() {
	x = -x;
	y = -y;
	z = -z;
}

int main() {
	Space s1(5,4,3);
	s1.display();
	-s1;
	s1.display();
	return 0;
}
