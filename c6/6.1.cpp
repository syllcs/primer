#include <iostream>

using namespace std;
int fact(int i) 
{
	if (i == 0) return 1;
	else return i * fact(i - 1);
}

int main() 
{
	 cout << fact(5) << endl;
	 return 0;
}
