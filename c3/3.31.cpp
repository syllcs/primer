#include <iostream>
#include <stddef.h>

using namespace std;

int main()
{
	int a[10];
	for (size_t  i = 0; i < 10; i++){
		a[i] = i;
	}
	for (int i = 0; i < 10; i++){
		cout << i << endl;
	}
}
