#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	map<string, size_t> word_count;
	string word;
	while(cin >> word) {
		string low_word;
		for (auto c:word) {
			if (islower(c)) 
				low_word.push_back(c);
			else if (isupper(c)) 
				low_word.push_back(tolower(c));
		}
		word_count[low_word]++;
	}
	for (const auto &w : word_count) {
		cout << w.first << " " << w.second <<endl;
	}
}
