#include <iostream>

using namespace std;
int abs(int i) 
{
	if (i < 0) return -i;
	return i;
}

int main() 
{
	 cout << abs(0) << endl;
	 cout << abs(5) << endl;
	 cout << abs(-6) << endl;
	 cout << abs(-100) << endl;
	 return 0;
}
