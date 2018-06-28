#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool greaterThanFive(string& s) {
	return s.size() >= 5;
}

int main() {
	vector<string> vs = {"aaaaa", "a", "avc", "agggffff"};
	auto iter = partition(vs.begin(), vs.end(), greaterThanFive);
	for(auto it = vs.begin(); it != iter; it++) 
		cout << *it << endl;
}
