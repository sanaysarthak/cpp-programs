// Class type to Basic type conversion is done using the casting operator

/* Rules:-
The casting operator function should satisfy the following conditions:
It must be a class member.
It must have a return statement.
It must not have any arguments. */

#include <iostream>
using namespace std;

class Sample {
	private:
		float a;
	public:
		Sample() {
			a = 10.23;
		}
		operator int() { // casting operator function
			int x;
			x = a;
			return x;
		}
};

int main()
{
	Sample S;
	int y = S; // Class type to Basic type conversion
	// y = int(S);
	cout << "The value of y = " << y;
	return 0;
}
