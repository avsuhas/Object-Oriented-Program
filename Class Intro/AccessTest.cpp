
#include <iostream>
using namespace std;

struct AccessTest 
{
	private:
		int a;
		int b;
	public:
		int c;
		void SetValue( int x )
		{
			a = x;
			b = ++x;
			c = ++x;
		}

		void GetValue(  )
		{
			cout << "x = " << x << " y = " << y << " z = " << z << endl;
		}
};

int main( )
{

	AccessTest At1, At2 ;
	
	At1.a = 15;
	At1.b = 16;
	At1.c = 17;

	At2.a = 9;
	At2.b = 10;
	At2.c = 11;
	
	At1.SetValue(2);
	At1.GetValue();	

	At2.SetValue(3);
	At2.GetValue();

	return 0;
		
}

