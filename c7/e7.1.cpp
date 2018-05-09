#include <iostream>

using namespace std;

class A {
public:
	int a;
	//declearantion
	static int b;
	
private: 
	static int c;
};

//int A::b = 1, c = 1;
//definition
int A::b = 1, A::c = 2;

int main() {
	cout << A::b << endl;
	//alteration
	A::b = 2;
	cout << A::b << endl;
	//cout << c << endl;
}
