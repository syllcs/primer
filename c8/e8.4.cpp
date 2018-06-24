#include <iostream>
using namespace std;

class a {
	public:
		int k;
		int b;
		a(int t) :cc(t){}
		int c(int d) {return d;}
	private:
		int cc;
};

int main() {
	a abc(3);
	cout << abc.c(abc.cc);
}
