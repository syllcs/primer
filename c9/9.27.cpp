#include <iostream>
#include <forward_list>
using namespace std;

void erase_odd(forward_list<int>& fli) {
	auto prev = fli.before_begin();
	auto curr = fli.begin();
	while (curr != fli.end()) {
		if (*curr % 2) {
			curr = fli.erase_after(prev);
		}
		else {
			prev = curr;
			curr++;
		}
	}
}

int main() {
	forward_list<int> fli = {1,2,3,4,5};
	erase_odd(fli);
	for (auto i:fli) {
		cout << i << endl;
	}
}
