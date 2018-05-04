#include <iostream>
#include <string>

#ifndef PERSON_H
#define PERSON_H
using namespace std;

struct Person;
istream& read(istream&, Person&);
ostream& print(ostream&, const Person&);

struct Person {
	//constructor
	Person() = default;
	Person(istream& is) {read(is, *this);}
	Person(const string& s): name(s) {}
	Person(const string& s1, const string& s2): name(s1), address(s2) {}
	
	string get_name() const {return name;}
	string get_address() const {return address;}
	
	string name;
	string address;
};

istream& read(istream& is, Person& item) {
	is >> item.name >> item.address;
	return is;
}

ostream& print(ostream& os, const Person& item) {
	os << item.name << " " << item.address;
	return os;
}

#endif
