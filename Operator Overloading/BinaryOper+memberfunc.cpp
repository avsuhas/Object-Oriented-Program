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


		BinaryPlus operator + (BinaryPlus &Data )
		{
			return BinaryPlus( a + (Data.a), b + (Data.b) );
		}
		
		void operator = ( const BinaryPlus &Data )
		{
			cout << "Overloaded Assignment Operator\n";
			this->a = Data.a;
			this->b = Data.b;	
		}
		void Display( )
		{
			cout << "a = " << a << " b = " << b << endl;
		}

};


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
