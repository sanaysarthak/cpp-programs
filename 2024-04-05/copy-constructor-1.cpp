// Copy constructor
// Use the object as constructor
// Syntax:- Demo(Demo &x)

#include <iostream>
using namespace std;

class Demo {
	private:
		int m, n;
	public:
		Demo(int x, int y) {
			m = x;
			n = y;
			cout << "Parameterized Constructor" << endl;
		}

		Demo(Demo &x) {
			m = x.m;
			n = x.n;
			cout << "Copy Constructor" << endl;
		}
};

int main() {
	Demo obj1(5, 6);
	Demo obj2(obj1); // Demo obj2 = obj1;
}
