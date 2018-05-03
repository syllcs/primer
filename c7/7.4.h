#include <iostream>
#include <string>

#ifndef PERSON_H
#define PERSON_H
using namespace std;

struct Person {
	string Name() const {return name;}
	string Address() const {return address;}
	string name;
	string address;
}

#endif
