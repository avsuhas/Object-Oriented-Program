
#include <iostream>
using namespace std;

class StaticExample
{
	private:
		static int a;
		int b;
	public:
		StaticExample( )
		{
			a = 6;
			b = 7;
		}
		static void GetVal( )
		{
		//	cout << this << endl;
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;
		}
};

int StaticExample::a;

int main( )
{
	StaticExample Se;
	StaticExample::GetVal( );
	Se.GetVal( );

	return 0;
}
