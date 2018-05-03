#include <iostream> 
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	string s1;
	string s2;
	do {
		cout << "Enter two strings: " << endl;
		getline(cin, s1);
		getline(cin, s2);
		if (s1.size() > s2.size())
			cout << s2 << endl;
		else 
			cout << s1 << endl;
	} while (s1.size() > 0 && s2.size() > 0);
	return 0;
}

