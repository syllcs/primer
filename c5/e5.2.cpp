#include <iostream>
#include <exception>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int c;
	try {
		c = a / b;
		cout << c << endl;
	} catch (exception e) {
		cout << "error" << endl;
	}
	cout << "test" << endl;
	return 0;
}
