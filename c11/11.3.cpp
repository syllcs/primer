#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map<string, size_t> word_count;
	string word;
	while(cin >> word) {
		word_count[word]++;
	}
	for (const auto &w : word_count) {
		cout << w.first << " " << w.second <<endl;
	}
}
