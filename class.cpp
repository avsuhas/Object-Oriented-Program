#include <iostream>
using namespace std;

class Book
{
	private:
		char *Author;
		int Pages;
		double Price;
	public:
		
		// This is a MUTATOR METHOD
		void EnterBookDetails( const char *, int, double );

		//This is an ACCESSOR METHOD
		void QueryBookDetails( );
};

void Book :: EnterBookDetails( const char *ArgAuthor, int ArgPage, double ArgPrice )
{
	Author = (char *)malloc(strlen(ArgAuthor) + 1 );	
	strcpy(Author, ArgAuthor);
	Pages = ArgPage; 	
	Price = ArgPrice;
}

void Book :: QueryBookDetails( )
{
	cout << "Author : " << Author << endl;
	cout << "Pages  : " << Pages  << endl;
	cout << "Price  : " << Price  << endl;
} 

int main( )
{
	//No struct keyword required
	Book Rit, Sku;

	Rit.EnterBookDetails("Ritchie", 250, 175.00);
	Sku.EnterBookDetails("Subhash", 600, 375.00);

	cout << endl;
	Rit.QueryBookDetails( );
	cout << endl;
	Sku.QueryBookDetails( );	
	cout << endl;

	return 0;
}
