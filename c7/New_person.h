#include <iostream>
#include <string>

#ifndef PERSON_H
#define PERSON_H
using namespace std;

class Person;
istream& read(istream&, Person&);
ostream& print(ostream&, const Person&);

class Person {
	friend istream& read(istream&, Person&);
	friend ostream& print(ostream&, const Person&);
public:
	//constructor
	Person() = default;
	Person(istream& is) {read(is, *this);}
	Person(const string& s): name(s) {}
	Person(const string& s1, const string& s2): name(s1), address(s2) {}
	
	string get_name() const {return name;}
	string get_address() const {return address;}

private:
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
