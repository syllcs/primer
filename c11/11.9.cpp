#include <iostream>
#include <map>
#include <string>
#include <list>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
	map<string, list<int>> word_line;
	ifstream ifs("D:\\install.log");
	string line;
	int line_num = 1;
	while(getline(ifs, line)) {
		istringstream iss(line);
		string word;
		while(iss >> word) {
			word_line[word].push_back(line_num);
		}
		line_num++;
	}
	for (auto &wl : word_line) {
		cout << wl.first << " ";
		for(int i:wl.second) {
			cout << i << " ";
		}
		cout << endl;
	}
}
