#include <iostream>
using namespace std;

class ShallowCopy
{
	private:
		char *Str;
	public:
		ShallowCopy( const char *String )
		{	
			Str = new char [10];
			strcpy( Str, String);
		}
		ShallowCopy( ShallowCopy &SRef )
		{
			Str = new char [10];
			strcpy( Str, SRef.Str) ;
		}
		void Display( )
		{
			cout << (int *)Str << endl;
			cout << Str << endl;
		}
};

int main( )
{
	ShallowCopy Sc1( "Subhash" );
	ShallowCopy Sc2(Sc1); 
	
	Sc1.Display( );
	Sc2.Display( );
	
	return 0;
}
