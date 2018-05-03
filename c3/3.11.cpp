#include <iostream>
#include <string>

using std::string;

int main()
{
	const string s = "Keep out!";
	for (auto &c:s){
		c++;
	}
	return 0;
}
