#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	auto f = [&n](){return n==0?true:(n--, false);};
}
