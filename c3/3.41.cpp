#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	int a[10];
	for (int i = 0; i < 10; i++){
		a[i] = i;
	}
	vector<int> l(begin(a), end(a));
	for (auto i : l){
		cout << i << endl;
	}
	return 0;
}
