#include <iostream>
#include <string>
#include <cctype>

using std::cout;
using std::cin;
using std::string;

int main()
{
	string str;
	string new_str;
	getline(cin, str);
	for (auto c:str){
		if (!ispunct(c)){
			new_str += c;
		}
	}
	cout << new_str;
	return 0;
}
