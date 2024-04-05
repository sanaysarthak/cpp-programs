#include <iostream>
using namespace std;

class Demo {
	private:
		int m, n;
	public:
		Demo(int x, int y) { // Parameterized Constructor
			m = x;
			n = y;
			cout << "Constructor Called";
		}
};

int main() {
	Demo d1(5,6);
	return 0;
}
