#include <iostream>
#include <string>
#include <sstream>
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
	string s;
	getline(cin, s);
	istringstream iss(s);
	readfile(iss);
}
