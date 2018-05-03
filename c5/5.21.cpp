#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
	string s0, s1;
	string s;
	bool exist = false;
	while (cin >> s1) {
		if (islower(s1[0])) continue;
		if (s0 == s1) {
			exist = true;
			break;
		}
		s0 = s1;
	}
	if (exist) cout << s1 << endl;
	else cout << "None" << endl;
	return 0;
}
