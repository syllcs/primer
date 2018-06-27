#include <iostream>
#inlcude <vector>
using namespace std;

bool find_value(vector<int>::iterator b, vector<int>::iterator e, int num) {
	while (b < e) {
		if (*b == num) return true;
		b++;
	}
	return false;
}


