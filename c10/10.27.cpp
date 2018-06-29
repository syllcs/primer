#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

void copy_vector_unique(vector<int> vi) {
	list<int> li;
	sort(vi.begin(), vi.end());
	unique_copy(vi.begin(), vi.end(), back_inserter(li));
	for(int i:li) {
		cout << i << endl;
	}
}

int main() {
	vector<int> vi = {2,4,6,2,4,2,1,6,8};
	copy_vector_unique(vi);
}
