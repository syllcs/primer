#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
	vector<int> vi = {1,2,3,4,5,6,7,8,9};
	vector<int> v2, v3, v4;
	//copy(vi.begin(), vi.end(), inserter(v2));
	copy(vi.begin(), vi.end(), front_inserter(v3));
	copy(vi.begin(), vi.end(), back_inserter(v4));
	int count = 0;
	for(int i : vi) {
		cout << v3[count] << " " << v4[count] << endl;
		count++;
	}
}
