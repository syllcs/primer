#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;
using std::unique;
using std::stable_sort;
#include <string>
using std::string;

bool isShort(const string& s1, const string& s2) {
	return s1.size() < s2.size();
}

void elimDups(vector<string>& vs) {
	sort(vs.begin(), vs.end());
	auto iter = unique(vs.begin(), vs.end());
	vs.erase(iter, vs.end());
}

int main() {
	vector<string> vs = {"the", "abc", "ddd", "give", "me", "the", "thing", "that", "I", "need"};
	elimDups(vs);
	stable_sort(vs.begin(), vs.end(), isShort);
	for (string& s:vs) {
		cout << s << endl;
	}
}


