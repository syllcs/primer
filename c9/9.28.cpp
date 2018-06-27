#include <iostream>
#include <forward_list>
#include <string>
using namespace std;

void insert_string(forward_list<string>& fls, string s1, string s2) {
	auto prev = fls.before_begin(), curr = fls.begin();
	while(curr != fls.end()) {
		if (*curr == s1) {
			fls.insert_after(curr, s2);
			return;
		}
		prev = curr;
		curr++;
	}
	fls.insert_after(prev, s2);
}

int main() {
	forward_list<string> fls = {"abc", "efg", "aaa"};
	string s1 = "aaa", s2 = "abc", s3 = "zzz", s4 = "append";
	insert_string(fls, s1, s4);
	insert_string(fls, s2, s4);
	insert_string(fls, s3, s4);
	for(auto i:fls) {
		cout << i << endl;
	}
}
