#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
	map<string, vector<pair<string, int>>> family;
	string first_name, last_name;
	while ([&]() -> bool {
		cout << "Please enter family name" << endl;
		return cin >> first_name && first_name != "@q";
	}()) {
		int birthday;
		cout << "Please enter children's name" << endl;
		while (cin >> last_name && cin >> birthday&& last_name != "@q") {
			family[first_name].push_back({last_name, birthday});
		}
	}
}
