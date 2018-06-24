#include <iostream>
using namespace std;

int main() {
	int i(3);
	int f(int, int);
	cout << f(2,2);
}

int f(int i, int j) {
	return i + j;
}
