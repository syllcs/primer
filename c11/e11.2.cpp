#include <map>
#include <iostream>
using namespace std;

int main() {
	map<int, int> mi;
	mi.insert({1,2});
	mi.insert({2,3});
	mi.insert({1,3});
	cout << mi[1];
	for (auto i:mi) {
		cout << i.first << " " << i.second << endl;
	}
}
