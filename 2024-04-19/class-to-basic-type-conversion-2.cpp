// Class to Basic type conversion
// Write a program in C++ to find the sum of the elements of an array (data member) 

#include <iostream>
using namespace std;

class Sample {
	private:
		int a[5];
	public:
		Sample() {
			for(int i=0; i<5; i++) {
				a[i] = i*2;
			}
		}
		operator int();
};

Sample :: operator int() {
	int sum = 0;
	for(int i=0; i<5; i++) {
		sum += a[i];
	}
	return sum;
}

int main()
{
	Sample S;
	int sum;
	sum = S;
	cout << "Sum of S = " << sum;
	return 0;
}
