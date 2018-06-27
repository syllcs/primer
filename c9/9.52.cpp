#include <iostream>
#include <stack>
#include <string>
using namespace std;

string bracket(string& s) {
	stack<char> sc;
	string s2;
	for(auto i:s) {
		if (i == '(') {
			sc.push('(');
		}
		else if (i == ')') {
			if (sc.empty()) 
				throw new exception();
			sc.pop();
			if (sc.empty()) 
				s2.append("#");
		}
		else {
			if (sc.empty())
				s2.insert(s2.end(), i);
		}
	}
	return s2;
}

int main() {
	string s = "abeaf eafeg afe (feafe()feaf)(fe)(fe(fes(fesa(fe)))) feafe";
	cout << bracket(s) << endl;
}
