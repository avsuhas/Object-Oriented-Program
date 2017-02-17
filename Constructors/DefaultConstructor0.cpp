#include <iostream>
using namespace std;

class Example
{
	private:
		int Data1;
		int Data2;
	public:
		void Display( )
		{
			cout << "Hello World\n";
		}	
};

int main( )
{
	Example e1;
	Example e2;

	e1.Display( );
	e2.Display( );

}

