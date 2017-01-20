/* DEMONSTRATES OBJECT SLICING */

#include <iostream>

using namespace std;

class Base
{
	public:
		int x, y;
};

class Child : public Base
{	
	public:
		int z;
};

int main( )
{
	Base b;
	Child c;
	b.x = 10;
	b.y = 20;
	cout << "b.x = " << b.x << " b.y = " << b.y << endl;
	c.x = 30;
	c.y = 40;
	c.z = 50;
	cout << "c.x = " << c.x << " c.y = " << c.y <<" c.z = " << c.z << endl;
	b = c; // Object is getting sliced 
	cout << "b.x = " << b.x << " b.y = " << b.y << endl;
	
}
