
#include <iostream>
using namespace std;
void function2( );
namespace Suhas
{
	int i;
	void function( )
	{	
		cout << "Hello function\n";
	}
}

int main( )
{
	using Suhas::i; // using declaration
	using Suhas::function; //using declaration
	i = 6;
	cout << "i = " << i << endl;
	function( );		
	return 0;
}
