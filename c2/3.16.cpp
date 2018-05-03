#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
	vector<string> l;
	string s;
	while (cin >> s){
		l.push_back(s);
	}
	cout << l.size() << endl;
	for(auto &i : l){
		cout << i << endl;
	}
	return 0;
}
