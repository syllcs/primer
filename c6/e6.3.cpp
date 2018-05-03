#include <iostream>
using namespace std;

int test() {
	cout << "2 " << __func__ << endl;
}
int main() {
	//test();
	cout << "1 " << __func__ << endl;
	cout << __FILE__ << endl;
	cout << __LINE__ << endl;
	cout << __TIME__ << endl;
	cout << __DATE__ << endl;
}
