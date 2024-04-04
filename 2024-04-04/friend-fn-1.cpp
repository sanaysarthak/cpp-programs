#include <iostream>
using namespace std;

class Numbers {
	private:	
		int num1, num2;
	public:
		void set_data(int a, int b);
		friend int add(Numbers N);
};

void Numbers :: set_data(int a, int b) {
	num1 = a;
	num1 = b;
}

int add(Numbers N) {
	return (N.num1 + N.num2);
}

int main() {
	Numbers N1;
	N1.set_data(10, 20);
	cout << "Sum = " << add(N1);
	return 0;
}
