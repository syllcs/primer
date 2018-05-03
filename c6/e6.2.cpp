#include <iostream>
#include <vector>

using namespace std;

vector<int> f(int a)
{
	return {a, a, a, a};
}

int main()
{
	int a = 0;
	vector<int> v = f(a);
	for(auto i : v) {
		cout << i << endl;
	}
	return 0;
}
