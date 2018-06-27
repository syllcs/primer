#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
	int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
	list<int> l;
	vector<int> v;
	for (int i = 0; i < 11; i++) {
		l.push_back(ia[i]);
		v.push_back(ia[i]);
	}
	auto itl = l.begin();
	auto itv = v.begin();
	while (itl != l.end()) {
		if (*itl % 2) {
			itl = l.erase(itl);
			itv++;
		}
		else {
			itv = v.erase(itv);
			itl++;
		}
		
	}
	for (auto i:l) 
		cout << i << endl;
	cout << endl;
	for (auto i:v)
		cout << i << endl;
}
