#include "Sales_data_del.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "begin" << endl;
	//wrong, cause it's a function declearation with no formal parameters.
	//Sales_data s1();
	Sales_data s1;
	cout << endl;
	string str = "hello world";
	Sales_data s2(str);
	cout << endl;
	Sales_data s3(str, 1, 2);
	cout << endl;
	Sales_data s4(cin);
	cout << "end" << endl;
}
