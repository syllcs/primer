#include <iostream>
#include <vector>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int divi(int a, int b) {
	return a / b;
}

int main() {
	vector<int(*)(int, int)> v;
	v.push_back(add);
	v.push_back(sub);
	v.push_back(mul);
	v.push_back(divi);
	cout << v[0](4,5) << endl;
	cout << v[1](4,5) << endl;
	cout << v[2](4,5) << endl;
	cout << v[3](4,5) << endl;
}
