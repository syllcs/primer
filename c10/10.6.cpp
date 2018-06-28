#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::fill_n;

void set_zero(vector<int>& vi) {
	fill_n(vi.begin(), vi.size(), 0);
}

int main() {
	vector<int> vi = {1,2,3,4};
	set_zero(vi);
	for(int i:vi) {
		cout << i << endl;
	}
}
