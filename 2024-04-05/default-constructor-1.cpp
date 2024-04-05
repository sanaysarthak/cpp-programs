#include <iostream>
using namespace std;

class Area {
	private:
		int length, breadth;
	public:
		Area() {
			length = 5;
			breadth = 2;
		}
		void calculate() {
			cout << "Area = " << length * breadth << endl;
		}
};

int main() {
	Area A1;
	A1.calculate();
	Area A2;
	A2.calculate();
	return 0;
}
