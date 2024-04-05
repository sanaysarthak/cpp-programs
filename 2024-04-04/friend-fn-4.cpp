// Find the mean of two given values using Friend function

#include <iostream>
using namespace std;

class Mean {
	private:
		int a, b;
	public:
		void set_data();
		friend float printMean(Mean);
};

void Mean :: set_data() {
	cout << "Enter first value: ";
	cin >> a;
	cout << "Enter second value: ";
	cin >> b;
}

float printMean(Mean M) {
	return float ((M.a + M.b)/2);
}

int main() {
	Mean m1;
	m1.set_data();
	cout << "\nMean of the two values is: " << printMean(m1);
	return 0;
}
