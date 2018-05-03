#include <iostream>
#include <initializer_list>

using namespace std;

int sum(initializer_list<int> l) 
{
	int s = 0;
	for (int i : l) {
		s += i;
	}
	return s;
}

int main() 
{
	int a = sum({1,2,3,4,5,6});
	int b = sum({4,5,6});
	cout << a << b << endl;
	return 0;
}
