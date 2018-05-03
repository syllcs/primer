#include <iostream>
#include <string>
using namespace std;

void print(int a) {
	cout << "1" << endl;
}
void print(string s) {
	cout << s << endl;
}
int main() {
	string s = "ABC";
	print(s);
	print(1);
}
