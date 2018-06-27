#include <iostream>
#inlcude <vector>
using namespace std;

vector<int>::iterator find_value(vector<int>::iterator b, vector<int>::iterator e, int num) {
	while (b < e) {
		if (*b == num) return b;
		b++;
	}
	return e;
}


