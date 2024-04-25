// W.A.P. for function overloading for add(), volume() with different types of arguments and return types.

#include <iostream>
using namespace std;

int add(int a, int b) 
{
int sum = a + b;
return sum;
}

float add(float x, float y, float z)
{
float sum = x + y + z;
return sum;
}

int volume(int l, int b, int h) 
{
int vol= l * b * h;
return vol;
}

float volume(float a)
{
float vol = a*a*a;
return vol;
}

int main()
{
	// adding two integer data types
	cout << add(2,3) << endl; 

	// adding three floating data types
	cout << add(100.37, 20.52, 310.99) << endl;

	// volume of cuboid (length * breadth * height)
	cout << volume(10, 20, 30) << endl;

	// volume of cube (a^3)
	cout << volume(10.3) << endl;
}
