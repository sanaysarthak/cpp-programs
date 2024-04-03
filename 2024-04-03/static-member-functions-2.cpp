#include <iostream>
using namespace std;

class Box {
	private:
		static int length, breadth, height;
	public:
		static void print() {
			cout << "Length: " << length << endl;
			cout << "Breadth: " << breadth << endl;
			cout << "Height: " << height << endl;
		}
};

int Box :: length = 10;
int Box :: breadth = 20;
int Box :: height = 30;

int main() {
	Box b1;

	cout << "Static member functions called through object: " << endl;
	b1.print();

	cout << "Static member functions called through class: " << endl;
	Box :: print(); // generally, it is used this way only

	return 0;
}
