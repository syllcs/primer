#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
using std::count;

#include <list>
using std::list;

#include <string>
using std::string;
 
void print_count(list<string> ls, string s) {
	cout << count(ls.begin(), ls.end(), s) << endl;
}

int main() {
	list<string> ls = {"abc", "abc", "e"};
	print_count(ls, "abc");
}
