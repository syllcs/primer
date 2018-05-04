#include <iostream>
#include <string>
#include "Sales_data.h"

using namespace std;

int main() {
	Sales_data total(cin);
	if (!total.isbn().empty()) { 
		while (cin) {
			Sales_data trans(cin);
			if (total.isbn() == trans.isbn()) {
				total.combine(trans);
			}
			else {
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	} else {
		cerr << "No data?" << endl;
	}
}
