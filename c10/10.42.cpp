#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

void elimDups(list<string> &words) {
	words.sort();
	words.unique();
	for (auto i : words) {
		cout << i << endl;
	}
}

int main() {
	list<string> words = {"ccc", "aaa", "ccc", "aaa", "c", "a"};
	elimDups(words);
}
