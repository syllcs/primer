#include <iostream>

using namespace std;

int main() 
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if ( a > b && b > c && c > d) {
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}
	return 0;
}
