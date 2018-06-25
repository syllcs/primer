#include <sstream>
#include <string>
#include <fstream>
#include <vector>
#include <iostream>
using namespace std;

void func(string file) {
	ifstream f(file);
	vector<string> v;
	string temp;
	while(getline(f, temp)) {
		v.push_back(temp);
	}
	for (string& i: v) {
		istringstream iss(i);
		string t;
		while (iss >> t) cout << t << endl;
	}
}

int main() {
	func("D:\install.log");
}
