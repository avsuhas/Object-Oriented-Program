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
			cout << "Constructor Called\n";
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
	Dmad *Ptr1;
	Ptr1 = new Dmad;
	Ptr1->Display( );	
	delete Ptr1;	

	void *Ptr2 = new Dmad;
	((Dmad *)Ptr2)->Display( );
	delete (Dmad *)Ptr2;
	
	return 0;
}
