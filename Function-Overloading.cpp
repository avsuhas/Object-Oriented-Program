#include <iostream>
using namespace std;

void Display( int );
void Display( double );
void Display( char );
int main( )
{
	char c = 'A';
	int i = 5;
	double d = 5.5;

	Display(c);
	Display(i);
	Display(d);	

	return 0;
}

void Display( int x )
{
	cout << x << endl;
}

void Display( double y )
{
	cout << y << endl;
}

void Display( char z )
{
	cout << z << endl;
}
