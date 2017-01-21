#include <iostream>
using namespace std;

class Simple;
class Dimple
{
	public:
		void GetVal( Simple &s );
};


class Simple
{
	private:
		int Data;
	public:
		void SetVal(int val)
		{
			Data = val;					
		}
		friend void Dimple::GetVal(Simple &s);
};

void Dimple::GetVal( Simple &s )
{
	cout << s.Data << endl;
}


int main( )
{
	Simple s;
	Dimple d;
	s.SetVal(5);

	d.GetVal( s );
}
