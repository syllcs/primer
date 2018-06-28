#include <iostream>
using std::cout;
using std::endl;

#include <numeric>
using std::accumulate;

#include <vector>
using std::vector;

int sum(vector<int> vi) {
	return accumulate(vi.cbegin(), vi.cend(), 0);
}

int main() {
	vector<int> vi = {1,2,3,4,5};
	cout << sum(vi) << endl;
}
