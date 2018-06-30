#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	multimap<string, string> authors;
	authors.insert({"a", "b"});
	authors.insert({"b", "c"});
	authors.insert({"b", "d"});
	authors.insert({"e", "f"});
	
	auto p = authors.equal_range("b");
	for(auto pos = p.first; pos != p.second; pos++) 
		cout << pos->second << endl;
	
	authors.erase(p.first, p.second);
	
}
