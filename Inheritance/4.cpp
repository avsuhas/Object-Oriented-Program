#include <iostream>

using namespace std;

class Base
{
	private:
		int a;

};

class Derived : public Base
{
	private:
		int b;
};


int main( )
{
	Derived d;
	cout << sizeof(d)<< endl;
}
