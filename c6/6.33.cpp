#include <iostream>
#include <vector>

using namespace std;
using Iter = vector<int>::iterator;

void print(Iter beg, Iter end)
{
	if(beg == end) return;
	cout << *beg << endl;
	print(beg + 1, end);
}

int main()
{
	vector<int> v;
	for(int i = 0; i < 10; i++) v.push_back(i);
	print(v.begin(), v.end());
}
