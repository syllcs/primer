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
	for(auto i : l){
		for (auto &j : i){
			j = toupper(j);
		}
		cout << i << endl;
	}
	return 0;
}
