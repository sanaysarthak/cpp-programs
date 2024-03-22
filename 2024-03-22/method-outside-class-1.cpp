#include <iostream>
using namespace std;

class Test
{
	private:
		int marks;
		int spi;

	public:
		// declaring the methods
		void setData(int, float);
		void displayData();
};

void Test :: setData(int i, float j)
{
	marks = i;
	spi = j;
}

void Test :: displayData()
{
	cout << "Marks = " << marks << endl;
	cout << "SPI = " << spi;
}

int main()
{
	Test o1;
	o1.setData(70, 6.5);
	o1.displayData();
}
