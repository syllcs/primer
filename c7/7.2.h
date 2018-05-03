#include <iostream>
#include <string>

#ifndef SALES_DATA_H
#define SALES_DATA_H

using namespace std;

struct Sales_data {
	Sales_data& combine(const Sales_data&);
	string isbn() const {return bookNo;};
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data &rhs) {
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

#endif 

