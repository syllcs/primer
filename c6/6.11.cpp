#include <iostream>

using namespace std;

void reset(int &i) 
{
	i = 0;
	return;
}

int main() 
{
	int i = 42;
	cout << i << endl;
	reset(i);
	cout << i << endl;
	return 0;
}
