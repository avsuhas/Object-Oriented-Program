
#include <iostream>

using namespace std;
const int size = 10;

class Dmad
{
	private:
		int a;
		int b;
		char *Arr;
	public:
		Dmad( )
		{
			a = 5;
			b = 5;
			Arr = new char [size];	
			memset(Arr, '+', size);
		}
		~Dmad( )
		{
			cout << "Destructor called\n";
			delete [ ] Arr;	
		}
		void Display( )
		{
			cout << "a = " << a << " b = " << b << endl;
			for(int i = 0; i < size; i++ )
			{
				cout << "Arr[" << i << "] = " << Arr[i] << endl;
			}
		}
};

int main( )
{
	Dmad *Ptr;
	Ptr = new Dmad;
	
	Ptr->Display( );	

	delete Ptr;	
	return 0;
}
