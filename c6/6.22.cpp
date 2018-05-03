#include <iostream>

using namespace std;

void swap_pointer(const int*& p1, const int*& p2) 
{
	const int* temp = p1;
	p1 = p2;
	p2 = temp;
}

int main()
{
	int i = 0, j = 1;
	int* p1 = &i;
	int* p2 = &j;
	swap_pointer(p1, p2);
	cout << *p1 << *p2 << endl;
	return 0;
}
