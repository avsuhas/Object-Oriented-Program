#include <iostream>
using namespace std;

class Example
{
	private:
		int Data1;
		int Data2;
	public:
		Example(int x)
		{
			cout << "Constructor called" ;
			Data1 = x;
			Data2 = ++x;	
		}	
};

int main( )
{
	Example e1;
	Example e2;

	Example e3(5);
	Example e4(6);

}

