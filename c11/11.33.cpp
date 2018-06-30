#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <sstream>
using namespace std;

void word_transform(ifstream& map_file, ifstream& input) {
	string line;
	map<string, string> mss;
	while(getline(map_file, line)) {
		istringstream iss(line);
		string word1, word2, word3;
		iss >> word1;
		iss >> word3;
		while(iss >> word2) 
			word3 += " " + word2;
		mss[word1] = word3;
	}
	
	
	ofstream output("D:\\test.txt");
	while(getline(input, line)) {
		istringstream iss(line);
		string word1, word2;
		while(iss >> word1) {
			if(mss.find(word1) != mss.end())
				output << mss[word1];
			else 
				output << word1;
			output << " ";
		}
		output << "\n";	
	}
}

int main() {
	ifstream map_file("D:\\map.txt");
	ifstream output("D:\\output.txt");
	word_transform(map_file, output);
}
