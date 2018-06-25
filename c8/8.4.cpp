#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

void read(const string& s, vector<string>& v) {
	ifstream ifs(s);
	string temp;
	while(getline(ifs, temp))
		v.push_back(temp);
}

int main() {
	string s;
	cin >> s;
	vector<string> v;
	read(s, v);
	for(auto i:v) {
		cout << i << endl;
	}
}
