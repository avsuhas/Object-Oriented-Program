#include <iostream>
using namespace std;

bool Divide ( int  &, int & );


int main( )
{
	char Answer;
	int Val1, Val2;
	bool Result;

	while( true  )
	{		
		cout << "Enter the two values" << endl;	
		cin >> Val1 >> Val2;
		
		if( (Result = Divide( Val1, Val2 )) == false )
		{
			cout << "ERROR: Division cannot be performed by zero\n";
			continue;		
		}

		cout << endl;	

		cout << "Do you want to continue ? (y/n) " << endl;
		cin >> Answer;
		
		if( Answer == 'y' )
		{
			continue;
		}
		else
		{
			cout << "Good Bye" << endl;
			break;
		}
	}

}

bool Divide ( int &x, int &y )
{
	bool Result = (y == 0 );

	if( Result == true )
		return false;
	
	cout << "Division = " << (x / y) << endl;
	return true;
}
