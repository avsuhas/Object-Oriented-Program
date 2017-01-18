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

using namespace Suhas ;
int main( )
{
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
