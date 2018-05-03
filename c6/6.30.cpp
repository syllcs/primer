#include <iostream>
#include <string>

using namespace std;

bool str_substring(string &s1, string &s2)
{
	if (s1.size() == s2.size()) return s1 == s2;
	else if (s1.size() > 10) return true;
}

int main() 
{
	string s1, s2;
	cin >> s1;
	cin >> s2;
	bool b = str_substring(s1, s2);
	cout << b << endl;
}
