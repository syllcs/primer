#include <string>
#include <deque>
#include <iostream>
using namespace std;

int main() {
	string word;
	deque<string> dqs;
	while(cin >> word) {
		dqs.push_back(word);
	}
	
	for(auto iter = dqs.begin();iter != dqs.end(); iter++) {
		cout << *iter << endl;
	}
}
