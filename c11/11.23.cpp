#include <iostream>
#include <vector>
#include <map>
#include <string>
//#include <multimap>
using namespace std;

int main() {
	multimap<string, string> family;
	string first_name, last_name;
	while ([&]() -> bool {
		cout << "Please enter family name" << endl;
		return cin >> first_name && first_name != "@q";
	}()) {
		cout << "Please enter children's name" << endl;
		if (cin >> last_name && last_name != "@q") {
			family.insert({first_name, last_name});
		}
	}
}
