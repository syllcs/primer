#include "New_sales_data.h"
#include <iostream>
#include <unordered_set>
using namespace std;

size_t hasher(const Sales_data &sd) {
	return hash<string>()(sd.isbn());
}

bool eqOp(const Sales_data &lhs, const Sales_data &rhs) {
	return lhs.isbn() == rhs.isbn();
}

int main() {
	using SD_multiset = unordered_multiset<Sales_data, decltype(hasher)*, decltype(eqOp)*>;
	SD_multiset bookstore(1000, hasher, eqOp);
	cout << bookstore.size() << endl;
	cout << bookstore.bucket_count() << endl;
	cout << bookstore.load_factor() << endl;
}

