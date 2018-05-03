#include <iostream>
#include <vector>
//#define NDEBUG

using namespace std;

void print(vector<int>::iterator beg, vector<int>::iterator end) {
	#ifndef NDEBUG
		cout << "size: " << end - beg << endl;
	#endif
	if(beg == end) return;
	cout << *beg << endl;
	print(beg+1, end);
}

int main() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	print(v.begin(), v.end());
}
