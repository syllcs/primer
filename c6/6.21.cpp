#include <iostream>

using namespace std;

int bigger(int i, const int* const p) 
{
	if (i > *p) return i;
	return *p;
}

int main() 
{
	int i = 2, j = 1;
	int b = bigger(i, &j);
	cout << b << endl;
}
