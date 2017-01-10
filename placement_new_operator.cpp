
#include <iostream>
using namespace std;
int main ()
{
   	int *p = new int [10]; //pre-determined memory location
	int i;
   	for(i = 0; i < 10; i++)
        	cout << (p + i) << endl;
   	cout << "...............\n";
   	int *s = new (p) int [5]; // placement new operator
   	for (int i = 0; i < 5; i++)
	{
		s[i] = i;
	}

	for ( int i = 0; i < 5; i++ )
	{	
		cout << (s + i) << " " << *(s + i) << endl;
	}
	return 0; 
}
