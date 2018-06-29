#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iterator>
using namespace std;

int main() {
	ifstream ifs("D:\\install.log");
	istream_iterator<string> its(ifs);
	istream_iterator<string> its2;
	vector<string> vs;
	copy(its, its2, back_inserter(vs));
	for(string i:vs) {
		cout << i << endl;
	}
}
