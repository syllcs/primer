#include <iostream>

using namespace std;

void ran() 
{
	static int a = 0;
	cout << a << endl;
	if (a == 0) a = 1;
	return;
}
int main() 
{
	for (int i = 0; i < 10; i++) {
		ran();
	}
	return 0;
}
