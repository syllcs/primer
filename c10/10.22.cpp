
#include <functional>
using namespace std::spaceholders;

bool size_cut(string s, int sz) {
	return s.size() >= sz;
}

int main() {
	int sz = 6;
	auto f = bind(size_cut, _1, sz);
}
	
