#include <iostream>
#include <vector>
#include <list>

using namespace std;

bool compare_vector(const vector<int>& v1, const vector<int>& v2) {
	return v1 == v2;
}

bool compare_vector_list(const vector<int>& v, const list<int>& l) {
	vector<int> v2(l.begin(), l.end());
	return v == v2;
}

int main() {
	vector<int> v1 = {1,2,3,4,5};
	vector<int> v2 = {1,2,3,3};
	vector<int> v3 = {1,2,3,4,5};
	list<int> l1 = {1,2,3,4};
	list<int> l2 = {1,2,3,4,5};
	cout << compare_vector(v1, v2) << endl;
	cout << compare_vector(v1, v3) << endl;
	cout << compare_vector_list(v1, l1) << endl;
	cout << compare_vector_list(v1, l2) << endl; 
}
