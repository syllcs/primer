#include <iostream>
using namespace std;

int main() {
	auto s = cin.rdstate();
	cout << s << endl;
	cin.clear(cin.rdstate() | cin.failbit);
	s = cin.rdstate();
	cout << s << endl;
}
