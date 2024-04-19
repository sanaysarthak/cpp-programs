// Basic to class type conversion can be achieved through constructor

#include <iostream>
using namespace std;

class Sample {
	private:
		int a;
	public:
		Sample() {}
		Sample(int x) {
			a = x;
		}
		void display() {
			cout << "The value of a = " << a;
		}
};

int main()
{
	int m = 10;
	Sample s;
	// Sample s(m);
	// Sample s(10);
	s = m;
	s.display();
	return 0;
}
