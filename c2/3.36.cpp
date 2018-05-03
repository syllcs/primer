#include <iostream>
#include <iterator>
int main()
{
	int a[5];
	int b[5];
	for (int i = 0; i < 5; i++){
		a[i] = i;
		b[i] = i;
	}
	auto s1 = begin(a);
	auto e1 = end(a);
	auto s2 = begin(b);
	auto e2 = end(b);
	if (s1
