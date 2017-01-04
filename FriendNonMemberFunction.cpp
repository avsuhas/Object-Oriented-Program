#include <iostream>
using namespace std;

class Example
{
	private:
		int Data;
	public:
		void Set(int val)
		{
			Data = val;					
		}	
		friend void GetVal(Example &);
};

void GetVal( Example &e )
{
	cout << e.Data << endl;
}

int main( )
{
	Example e;

	e.Set(5);
	GetVal(e); 

	return 0;
}
