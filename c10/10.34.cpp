#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main() {
	vector<int> vec = {1,2,3,4,5};
	for (auto iter = vec.rbegin(); iter != vec.rend(); iter++) {
		cout << *iter << endl;
	}
}
