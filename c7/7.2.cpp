#include <iostream>
#include <string>
#include "7.2.h"

using namespace std;

int main() {
	Sales_data book1, book2;
	book1.bookNo = "abc";
	book1.units_sold = 3;
	book1.revenue = 4.0;
	
	book2.bookNo = "efg";
	book2.units_sold = 5;
	book2.revenue = 5.3;
	
	cout << book1.isbn() << endl;
	book1.combine(book2);
	cout << book1.revenue << endl;
}
