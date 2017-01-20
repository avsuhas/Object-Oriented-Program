#include <iostream>

using namespace std;

class A
{
	private:
		int x;
	public:
		int y;
	protected:
		int z;
};

class B : public A
{
	public:
		void func1( )
		{
			x = 1;
			z = 2;
			y = 3;
		}
};

class C : public B
{
	public:
		void func2( )
		{
			x = 1;
			y = 2;
			z = 3;
		}
};

int abc( B &b1 )
{
	b1.x = 20;
	b1.y = 30;
	b1.z = 30;
}

int main( )
{
	A a1;
	B b1;
	C c1;

	b1.func1( );
	c1.func2( );
	abc(b1);

	return 0;
}
