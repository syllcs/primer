#include <iostream>

using namespace std;

istream& read(istream& is, int i) {
	is >> i;
	return is;
}

int main() {
	int i, j;
	if (read(read(cin, i), j)) {
		cout << "test" << endl;
	}
}
