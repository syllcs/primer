#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	vector<int> v;
	for (int i = 0; i < 20; ++i) {
		v.push_back(i);
	}
	for ( auto &i : v) {
		i = i % 2 == 0 ? i : 2 * i;
	}
	for (auto i : v) {
		cout << i << endl;
	}
	return 0;
}

