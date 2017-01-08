#include <iostream>
using namespace std;

class Book
{
	private:
		char *Author;
		int Pages;
		double Price;
	public:
		Book( );
		~Book( );
		void QueryBookDetails( )
		{
			cout << "Author : " << Author << endl;
			cout << "Pages  : " << Pages  << endl;
			cout << "Price  : " << Price  << endl;
		} 
};
Book :: Book( )
{
	cout << "Constructor Called\n";
	
	Author = (char *)malloc(10);	
	strcpy(Author, "Subhash");
	Pages = 600; 	
	Price = 375.00;
}

Book :: ~Book( )
{
	cout << "Destructor Called\n";
	free( Author );
}

int main( )
{
	Book Rit, Sku;

	cout << "After constructor Call\n";

	Rit.QueryBookDetails( );
	cout << endl;
	Sku.QueryBookDetails( );	

	return 0;
}

