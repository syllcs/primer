#include <iostream>
#include <forward_list>
using namespace std;

void alter_list(forward_list<int>& fli) {
	auto prev = fli.before_begin();
	auto curr = fli.begin();
	while(curr != fli.end()) {
		if (*curr % 2) {
			curr = fli.insert_after(curr, *curr);
			prev = curr;
			curr++;
		}
		else {
			curr = fli.erase_after(prev);
		}
	}
}

int main() {
	forward_list<int> fli = {1,2,3,4,5};
	alter_list(fli);
	for(auto i:fli) {
		cout << i << endl;
	}
}
