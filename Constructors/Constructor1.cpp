#include <iostream>
using namespace std;

class Book
{
	private:
		char Author[25];
		int Pages;
		double Price;
	public:
		
		Book( const char ArgAuthor[25], int ArgPage, double ArgPrice )
		{
			strcpy(Author, ArgAuthor);
			Pages = ArgPage; 	
			Price = ArgPrice;
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
	Book Rit( "Ritchie", 250, 175.00 ); 
	Book Sku( "Subhash", 600, 375.00 );


	Rit.QueryBookDetails( );
	cout << endl;
	Sku.QueryBookDetails( );	

	return 0;
}
