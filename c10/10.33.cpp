#include <iostream>
#include <fstream>
#include <iterator>
#include <string>
#include <algorithm>
using namespace std;

void even_odd_into_files(string sin, string sout1, string sout2) {
	ifstream ifs(sin);
	ofstream ofs1(sout1);
	ofstream ofs2(sout2);
	istream_iterator<int> iter_in(ifs), eof_in;
	ostream_iterator<int> iter_odd(ofs1, " ");
	ostream_iterator<int> iter_even(ofs2, "\n");
	
	vector<int> vec;
	copy(iter_in, eof_in, back_inserter(vec));
	for(int i : vec) {
		if (i % 2) *iter_odd++ = i;
		else *iter_even++ = i;
	}
}

int main() {
	even_odd_into_files("D:\\test.txt", "D:\\test1.txt", "D:\\test2.txt");
}
