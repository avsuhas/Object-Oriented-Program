#include <iostream>

using namespace std;

class BinaryPlus
{
	private:
		int a;
		int b;
	public:
		BinaryPlus( )
		{
	
		}

		BinaryPlus( int x, int y)	
		{
			a = x;
			b = y;
		}


		friend BinaryPlus operator + (BinaryPlus &, BinaryPlus & );

		void Display( )
		{
			cout << "a = " << a << " b = " << b << endl;
		}
};

BinaryPlus operator + (BinaryPlus &Data1, BinaryPlus &Data2 )
{
	BinaryPlus Bp;
	Bp.a = Data1.a + Data2.a;
	Bp.b = Data1.b + Data2.b;
	return Bp;
}

int main( )
{
	BinaryPlus Bm1(5, 6);
	BinaryPlus Bm2(1, 2);
	BinaryPlus Bm3;

	Bm3 = Bm1 + Bm2;	

	Bm1.Display( );	
	Bm2.Display( );	
	Bm3.Display( );	

	return 0;
}
