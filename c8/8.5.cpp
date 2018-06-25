#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

void read(const string& s, vector<char>& v) {
	ifstream ifs(s);
	char c;
	while(ifs >> c)
		v.push_back(c);
}

int main() {
	string s;
	cin >> s;
	vector<char> v;
	read(s, v);
	for(auto i:v) {
		cout << i << endl;
	}
}
