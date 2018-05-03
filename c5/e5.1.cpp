#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

int main() 
{
	int a, b;
	cin >> a >> b;
	try {
		if (a == b) {
			throw runtime_error("equal");
		}
	} catch (runtime_error err) {
		cout << err.what() << "\n try again " << endl;
	}
	cout << "test" << endl;
	return 0;
}
