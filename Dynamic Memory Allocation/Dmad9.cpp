#include <iostream>
#include <new>

using namespace std;
const int size = 10;

void * operator new ( size_t size )
{
	cout << "I am in overloaded operator new\n" ;
	void *Ptr = malloc( size );
	return Ptr;
}

void operator delete( void *Ptr )
{
	cout << "I am in overloaded operator delete\n" ;
	free( Ptr );
}

class Subhash
{
	public:
		Subhash( )
		{
			cout << "Subhash in Constructor\n";
		}
		~Subhash( )
		{
			cout << "Subhash in Destructor\n";
		}
		void Display( )
		{
			cout << "Subhash" << endl;
		}
};

int main( )
{
	int *Ptr1 = new int;
	*Ptr1 = 7;
	cout << *Ptr1 << endl;
	delete Ptr1;

	Subhash *Ptr2 = new Subhash;
	Ptr2->Display( );
	delete Ptr2;

	int *Ptr3 = new int [5];
	for( int i = 0; i < 5; i++ )
	{
		cout << "Ptr3[" << i << "] = " << Ptr3[i] << endl;
	}	
	delete [ ] Ptr3;

	Subhash *Ptr4 = new Subhash [5];

	for( int i = 0; i < 5; i++ )
	{
		Ptr4[i].Display( );
		(Ptr4 + i)->Display( );
	}	
	delete [ ] Ptr4;
	return 0;	
}
