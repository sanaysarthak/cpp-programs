// Last object created will be removed first
// use a tilde (~) sign as prefix before the name

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
			cout << "Default Constructor called." << endl;
		}

		~Rectangle() {
			cout << "Destructor called."<< endl;
		}
		
};

int main() {
	Rectangle r1;
	Rectangle r2;
	return 0;
}
