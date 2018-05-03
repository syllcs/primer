#include <iostream>

using namespace std;

int main()
{
	int i;
	cin >> i;
	int sum = 0;
	while (i != 42) {
		sum += i;
		cin >> i;
	}
	cout << sum << endl;
}
