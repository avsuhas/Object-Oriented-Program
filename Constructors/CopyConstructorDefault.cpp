
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
			Data1 = x;
			Data2 = ++x;	
		}	
		void GetVal( )
		{
			cout << "Data1 = " << Data1 << " Data2 = " << Data2 << endl;
		}
};

int main( )
{
	Example e1(5);
	e1.GetVal( );

	Example e2(e1);
	e2.GetVal( );

}

