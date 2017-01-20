
#include <iostream>

using namespace std;

class Base
{
	public:
		Base()
		{
			cout << "Base constructor called" << endl;
		}
		~Base( )
		{
			cout << "Base destructor called" << endl;
		}
};


class Derived_1 : public Base
{
	public:
		Derived_1()
		{
			cout << "Derived_1 constructor" << endl;
		}
		~Derived_1( )
		{
			cout << "Derived_1 destructor" << endl;
		}
	
};

class Derived_2 : public Derived_1
{
	public:
		Derived_2( )
		{
			cout << "Derived_2 constructor" << endl;
		} 
		~Derived_2( )
		{
			cout << "Derived_2 destructor" << endl;
		} 
};
class Derived_3 : public Derived_2
{
	public:
		Derived_3( )
		{
			cout << "Derived_3 constructor" << endl;
		} 
		~Derived_3( )
		{
			cout << "Derived_3 destructor" << endl;
		} 
};

int main( )
{
	Derived_2 d2;
}
