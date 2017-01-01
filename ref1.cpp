#include <iostream>
using namespace std;

void Swap_Val(int, int);
void Swap_Ptr(int *, int *);
void Swap_Ref(int &, int &);

int main( )
{
	cout << endl;

	int x = 5, y = 6;
	cout << "Before Swap by Val : x = " << x << " y = " << y << endl;
	Swap_Val(x, y);
	cout << "After Swap by Val  : x = " << x << " y = " << y << endl;

	cout << endl;

	int r = 5, s = 6;
	cout << "Before Swap by Ptr : r = " << r << " s = " << s << endl;
	Swap_Ptr( &r, &s);
	cout << "After Swap by Ptr  : r = " << r << " s = " << s << endl;

	cout << endl;

	int p = 5, q = 6;
	cout << "Before Swap by Ref : p = " << p << " q = " << q << endl;
	Swap_Ref( p, q);
	cout << "After Swap by Ref  : p = " << p << " q = " << q << endl;

	cout << endl;

	return 0;

}
void Swap_Val(int x, int y)
{
	int Temp;
	Temp = x;
	x = y;
	y = Temp;
}

void Swap_Ptr(int *p, int *q)
{
	int Temp;
	Temp = *p;
	*p = *q;
	*q = Temp;
}

void Swap_Ref(int &p, int &q)
{
	int Temp;
	Temp = p;
	p = q;
	q = Temp;
}
