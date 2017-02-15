#include <iostream>
using namespace std;

void Add( int, int =2 , int = 1 );

int main( )
{
	Add( 5, 6, 7 );	
	Add( 5, 6  );	
	Add( 5  );	

}

void Add( int x, int y, int z )
{
	cout << (x + y + z) << endl;
}
