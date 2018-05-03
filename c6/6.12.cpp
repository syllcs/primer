#include <iostream>

using namespace std;

void swap (int &i, int &j) 
{
	int temp;
	temp = i;
	i = j;
	j = temp;
	return;
}

int main() 
{
	int a = 5, b = 6;
	swap(a, b);
	cout << a << b << endl;
	return 0;
}
