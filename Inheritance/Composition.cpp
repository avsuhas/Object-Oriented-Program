

#include <iostream>

using namespace std;

class Engine
{	
	public:
		void EngineStart( )
		{
			cout << "Engine Starting......" << endl;
		}
		void EngineStop( )
		{
			cout << "Engine Stopping......." << endl;
		}
};


class Car
{
	private:
		Engine e; // Car has a engine
	public:
		void Start( )
		{
			e.EngineStart( );
		}
		void Stop( )
		{
			e.EngineStop( );
		}
};

int main( )
{
	Car Benz;
	Benz.Start( );
	Benz.Stop( );

	return 0;
}
