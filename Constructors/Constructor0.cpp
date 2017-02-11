#include <iostream>
using namespace std;

class Book
{
	private:
		char Author[25];
		int Pages;
		double Price;
	public:
		Book( )
		{
			cout << "Constructor Called\n";
			
			strcpy(Author, "Subhash");
			Pages = 600; 	
			Price = 375.00;
		}

		void QueryBookDetails( )
		{
			cout << "Author : " << Author << endl;
			cout << "Pages  : " << Pages  << endl;
			cout << "Price  : " << Price  << endl;
		} 
};

int main( )
{
	Book Rit, Sku;

	cout << "After constructor Call\n";

	Rit.QueryBookDetails( );
	cout << endl;
	Sku.QueryBookDetails( );	

	return 0;
}
