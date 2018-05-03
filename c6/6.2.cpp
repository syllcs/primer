#include <iostream>

using namespace std;
void fact(void) 
{
	int i;
	cin >> i;
	int res = 1;
	for(int j = 2; j <= i; j++) {
		res *= j;
	}
	cout << res << endl;
}

int main() 
{
	 while(true){
	 	fact();
	 }
	 return 0;
}
