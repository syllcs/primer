#include <iostream>
using namespace std;

istream& readfile(istream& ifs) {
	while (!ifs.eof()) {
		char c;
		ifs >> c;
		cout << c << endl;
	}
	ifs.clear();
	return ifs;
}

int main() {
	readfile(cin);
}
