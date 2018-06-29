#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
	list<int> li = {1,2,3,0,5,0,6};
	auto iter = find(li.rbegin(), li.rend(), 0);
	cout << *iter.base()<< endl;
}
