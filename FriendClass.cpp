#include <iostream>
using namespace std;

class Y;
	
class X
{
	private:
		int Data;
	public:
		void SetVal(int x)
		{
			Data = x;
		}
	friend class Y;
};

class Y
{
	private:
	public:
		void Func1( X &x )
		{
			cout << x.Data << endl;
		}

		void Func2( X &x )
		{
			cout << x.Data << endl;
		}
		
};


int main( )
{
	X x;
	Y y;
	
	x.SetVal(5);

	y.Func1( x );
	y.Func2( x );	

	return 0;
}
