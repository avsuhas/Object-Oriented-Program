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
			a++;
			b++;
		}
		void GetVal( )
		{
			cout << "a = " << a << " b = " << b << endl;
		}
	
};

int StaticExample::a;
int main( )
{
	StaticExample Se1, Se2, Se3;
	
	Se1.GetVal( );
	Se2.GetVal( );
	Se3.GetVal( );
	
	return 0;
}
