#include <iostream>

using namespace std;

void swap (int *p1, int *p2) 
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	return;
}

int main() 
{
	int a = 5, b = 6;
	swap(&a, &b);
	cout << a << b << endl;
	return 0;
}

	
