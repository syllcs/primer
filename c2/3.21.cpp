#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> v;
	string s;
	while (cin >> s){
		v.push_back(s);
	}
	auto b = v.begin();
	auto e = v.end();
	while (b != e){
		cout << b->size() << endl;
		b++;
	}
	return 0;
}
