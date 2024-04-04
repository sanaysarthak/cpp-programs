#include <iostream>
using namespace std;

class Box {
	private:
		double width;
	public:
		void setWidth(double wid);
		friend void printWidth(Box);
};

void Box :: setWidth(double wid) {
	width = wid;
}

void printWidth(Box b) {
	cout << "Width of Box: " << b.width;
}

int main() {
	Box boxObj;
	boxObj.setWidth(10.0);
	printWidth(boxObj);
	return 0;
}
