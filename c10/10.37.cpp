#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main() {
	vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
	list<int> lis;
	copy(vec.rbegin()+3, vec.rbegin()+7, back_inserter(lis));
	for (int i : lis) 
		cout << i << endl;
}
	
