#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;
using std::unique;

void elimDups(vector<int> vi) {
	sort(vi.begin(), vi.end());
	auto end_unique = unique(vi.begin(), vi.end());
	vi.erase(end_unique, vi.end());
	for (int i: vi) 
		cout << i << endl;
}

int main() {
	vector<int> vi = {1,4,6,32,64, 3, 4, 5, 6,6,6,6};
	elimDups(vi);
}
