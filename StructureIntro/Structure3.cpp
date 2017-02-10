#include <iostream>
using namespace std;

struct Book
{
	private:
		char Author[25];
		int Pages;
		double Price;
	public:
		
		// This is a MUTATOR METHOD
		void EnterBookDetails( const char *, int, double );

		//This is an ACCESSOR METHOD
		void QueryBookDetails( );
};

void Book :: EnterBookDetails( const char ArgAuthor[25], int ArgPage, double ArgPrice )
{
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

	Book *RitPtr = &Rit;
	Book *SkuPtr = &Sku;

	RitPtr->EnterBookDetails("Ritchie", 250, 175.00);
	SkuPtr->EnterBookDetails("Subhash", 600, 375.00);

	cout << endl;
	RitPtr->QueryBookDetails( );
	cout << endl;
	SkuPtr->QueryBookDetails( );	
	cout << endl;

	return 0;
}

