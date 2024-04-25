// W.A.P. to raise a number m to a power n (mn) (With arguments and return type).

#include <iostream>
using namespace std;

int i=1;

int Exponents(int m, int n)
{
	int output = 1;
	for(int i=1; i<=n; i++)
	{
		output = output*m;
	}
	return output;
}
int main()
{
	int m, n;
	cout << "Enter number: ";
	cin >> m;
	cout << "Enter power: ";
	cin >> n;
	int res = Exponents(m, n);
	cout << res;
}
