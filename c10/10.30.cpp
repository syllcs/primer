#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main() {
	vector<int> vec;
	istream_iterator<int> iter_int(cin);
	istream_iterator<int> eof_int;
	copy(iter_int, eof_int, back_inserter(vec));
	sort(vec.begin(), vec.end());
	ostream_iterator<int> iter_out(cout, " ");
	unique_copy(vec.begin(), vec.end(), iter_out);
	
	copy(vec.begin(), vec.end(), iter_out);
}
