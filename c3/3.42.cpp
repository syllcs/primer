#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	vector<int> ivec;
	for (int i = 0; i < 10; i++) {
		ivec.push_back(i);
	}
	auto length = ivec.size();
}
