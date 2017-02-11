
#include <iostream>
using namespace std;


class ThisTest
{
	private:
		
	public:
		void Display( )
		{
			cout << "this addess is = " << this << endl;
		}
};


int main( )
{
	ThisTest t;
	cout << "Address of t   = " << &t  << endl;
	t.Display( );

	return 0;
}
