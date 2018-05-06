#ifndef P_731_H
#define P_731_H

struct X;
struct Y;

struct X {
	Y *p;
}; 

struct Y {
	X x;
};

#endif
