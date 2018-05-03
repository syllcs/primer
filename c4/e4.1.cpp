#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	vector<int> v;
	for (int i = 0; i < 100; ++i) {
		v.push_back(i);
	}
	cout << sizeof(v) << endl;
	cout << v.size() << endl;
	return 0;
}
