#include <iostream>
using namespace std;
void function2( );
namespace Suhas
{
	int i;
	void function1( )
	{	
		cout << "Hello function\n";
	}
}

int main( )
{
	using namespace Suhas ; //using directive
	i = 6;
	cout << "i = " << i << endl;
	function1( );
	function2( );
	
	return 0;
}
void function2( )
{
	i = 6;
	function1( );
}
