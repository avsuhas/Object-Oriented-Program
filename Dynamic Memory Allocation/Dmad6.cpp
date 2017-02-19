#include <iostream>
#include <new>

using namespace std;
const int size = 10;

int main( )
{
	int *Ptr;
	try
	{
		for( int i = 0; i < 100000; i++ )
		{
			Ptr = new int[10000000000];
			cout << Ptr << endl;
		}
	}
	catch ( bad_alloc )
	{
		cout << "Baddddy\n";
	}
}
