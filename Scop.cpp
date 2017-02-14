/* using of Scope resolution operator */



#include <iostream>
using namespace std;

int a = 6;

int main( )
{
	int a = 10;
	cout << ::a << endl;
	
	return 0;
}
