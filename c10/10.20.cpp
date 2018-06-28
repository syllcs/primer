#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int count_big_string(vector<string> vs) {
	return count_if(vs.begin(), vs.end(), [](string s) {return s.size() > 5;});
}

int main() {
	vector<string> vs = {"abc", "aaaaaaaaaa", "afeeeeeeee"};
	cout << count_big_string(vs) << endl;
}
