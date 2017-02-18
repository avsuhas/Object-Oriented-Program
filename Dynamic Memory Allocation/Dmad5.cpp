
#include <iostream>

using namespace std;
const int size = 10;

class Dmad
{
	public:
		Dmad( )
		{
			cout << "Constructor Called\n";
		}
		~Dmad( )
		{
			cout << "Destructor Called\n";
			delete this;
		}
};

int main( )
{
	Dmad d;
	return 0;
}
