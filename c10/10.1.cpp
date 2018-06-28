#include <iostream>
using std::cout;
using std::endl;
#include <algorithm>
using std::count;
#include <vector> 
using std::vector;
void print_count(vector<int> vi, int value) {
	cout << count(vi.begin(), vi.end(), value) << endl;
}

int main() {
	vector<int> vi = {1,2,2,3,4,4,4,5};
	print_count(vi, 2);
	print_count(vi, 4);
}
