#include <vector>
#include <string>
#include <utility>
#include <iostream>
using namespace std;

int main() {
	vector<string> vs = {"a", "b", "c"};
	vector<int> vi = {1,2,3};
	vector<pair<string, int>> vp;
	auto vs_iter = vs.begin();
	auto vi_iter = vi.begin();
	for(; vs_iter != vs.end(); vs_iter++, vi_iter++) {
		vp.push_back({*vs_iter, *vi_iter});
	}
	for (auto i:vp) {
		cout << i.first << " " << i.second << endl;
	}
}
