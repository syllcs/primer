#include <iostream>
#include <stdexcept>

using namespace std;

int main() 
{
	int a, b;
	cin >> a >> b;
	int c;
	try {
		if (b == 0) throw runtime_error("divided by zero");
		cout << a/b << endl;
	} catch (runtime_error err) {
		cout << err.what() << "\ntest" << endl;
	}
	return 0;
}
