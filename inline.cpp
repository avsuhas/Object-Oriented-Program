#include <iostream>
using namespace std;

inline int Add( int, int );

int main( )
{
	cout << Add( 5, 6 ) << endl;
}

inline int Add( int x, int y )
{
	return (x + y);
}
