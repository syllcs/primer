#include <iostream>
#include <string>

#ifndef SALES_DATA_H
#define SALES_DATA_H

using namespace std;

class Sales_data;
istream& read(istream&, Sales_data&);
ostream& print(ostream&, const Sales_data&);
Sales_data add(const Sales_data&, const Sales_data&);

class Sales_data {
	friend istream& read(istream&, Sales_data&);
	friend ostream& print(ostream&, Sales_data&);
	friend Sales_data add(const Sales_data&, const Sales_data&);
public:
	//constructor
	//Sales_data(): bookNo(""), units_sold(0), revenue(0) {};
	Sales_data() = default;
	Sales_data(const string& s): bookNo(s) {}
	Sales_data(const string& s, unsigned n, double p): bookNo(s), units_sold(n), revenue(n*p) { }
	Sales_data(istream& is) {read(is, *this);}
	
	//member function
	Sales_data& combine(const Sales_data&);
	string isbn() const {return bookNo;}
private:
	double avg_price() const;
	// {return units_sold ? revenue/units_sold : 0;}
	
	//other member
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data &rhs) {
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

inline double Sales_data::avg_price() const {
	return units_sold ? revenue/units_sold : 0;
}
istream& read(istream& is, Sales_data& item) {
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

ostream& print(ostream& os, Sales_data& item) {
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
	return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
	Sales_data total = lhs;
	total.combine(rhs);
	return total;
}

/*
Sales_data::Sales_data(istream& is) {
	read(is, *this);
}
*/

#endif 

