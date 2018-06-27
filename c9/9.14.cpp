#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
	list<char*> lc = {"hello", "world", "!"};
	vector<string> vs(lc.begin(), lc.end());
	for(auto i:vs) {
		cout << i << endl;
	}
}
