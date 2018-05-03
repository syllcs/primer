#include <iostream>
using namespace std;

void calc(int a, int b) {
	cout << "1" << endl;
}
void calc(const int a, const int b) {
	cout << "2" << endl;
}
int main() {
	calc(1,2);
	int a = 0, b = 1;
	const int c = 0, d = 1;
	calc(a, b);
	calc(c, d);
}
