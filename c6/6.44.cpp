#include <iostream>
#include <string>

using namespace std;

inline const string& isShorter(const string& s1, const string& s2) {
	return s1.size() > s2.size() ? s2 : s1;
}

int main() {
	string a, b;
	a = "abc";
	b = "cded";
	const string& c = isShorter(a, b);
	cout << c << endl;
}
