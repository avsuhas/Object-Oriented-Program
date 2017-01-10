#include <iostream>

using namespace std;

int main( )
{
	int i = 7;
	int *Ptr1 = new int;
	*Ptr1 = i;
	cout << "i = " << i << " *Ptr1 = " << *Ptr1 << endl;
	delete Ptr1;

	int *Ptr2 = new int(2);
	cout << "*Ptr2 = " << *Ptr2 << endl;	
	delete Ptr2;

	int n;
	cout << "Enter the value of n\n";
	cin >> n;
	
	int *Ptr3 = new int [n];
	cout << "The values are...." << endl;
	for( int i = 0; i < n; i++ )
	{
		Ptr3[i] = i;
	}
	for( int i = 0; i < n; i++ )
	{
		cout << "Ptr[" << i << "] = " << Ptr3[i] << endl;	
	}
	delete [] Ptr3;

	return 0;
}
