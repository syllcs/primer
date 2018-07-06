#include "12.19.h"
using std::cin;
using std::cout;
using std::endl; 
int main() {
	StrBlob sb;
	string s;
	while (cin >> s) {
		sb.push_back(s);
	}
	auto b = sb.begin();
	auto e = sb.end();
	for(; b != e; b.incr()) {
		cout << b.deref() << endl;
	}
	/*
	while (1) {
		try {
			cout << b.deref() << endl;
			b.incr();
		} catch (out_of_range) {
			break;
		}
	}
	*/
}
			
