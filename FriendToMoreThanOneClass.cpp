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
//		friend void GetVal( X &, Y &);
};

class Y
{
	private:
		int Data;
	public:
		void SetVal( int y )
		{
			Data = y;
		}	
//		friend void GetVal( X &, Y &);
};

void GetVal( X &x , Y &y )
{
	cout << "X's Data = " << x.Data << endl;
	cout << "Y's Data = " << y.Data << endl;
}

int main( )
{
	X x;
	Y y;

	x.SetVal(5);
	y.SetVal(6);

	GetVal(x, y);
	
	return 0;
}
