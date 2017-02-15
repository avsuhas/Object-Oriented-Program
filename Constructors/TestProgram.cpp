

#include <iostream>

using namespace std;

class A
{
	private:
		int a;
		int b;

	public:
		A( )
		{
		}
		void GetVal( )
		{
			cout << a << b << endl;
		}
		A( int x, int y )
		{
			a = ++x;
			b = ++y;
		}
};

int main( )
{
	A a1;
	A a2( 5, 6 );
	a1.GetVal( );
	a2.GetVal( );
	
	return 0;
}
	
