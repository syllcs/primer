#include <iostream>
#include <vector>
#include <string>
using namespace std;

string vector2string(vector<char>& vc) {
	string s(vc.begin(), vc.end());
	return s;
}

int main() {
	vector<char> vc = {'a', 'b', 'c'};
	cout << vector2string(vc);
	
}
