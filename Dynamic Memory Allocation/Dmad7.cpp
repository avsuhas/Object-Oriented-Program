
#include <iostream>
#include <new>

using namespace std;
const int size = 10;
void CatchHandler( );
int Allocations;
int main( )
{
	set_new_handler(CatchHandler);
	int *Ptr;
	try
	{
		for( int i = 0; i < 100000; i++ )
		{
			Ptr = new int[10000000000];
			++Allocations;
			cout << Ptr << endl;
		}
	}
	catch ( bad_alloc )
	{
		cout << "Baddddy\n";
	}
	return 0;
}

void CatchHandler( )
{
	cout << "I am caught" << endl;
	cout << "Cannot allocate memory after " << Allocations << " allocations\n";
	exit(5);
}
