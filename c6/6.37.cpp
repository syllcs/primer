#include <iostream>
#include <string>
using namespace std;

auto func2() -> string(&)[10] {
	string s[10];
	return s;
}

int main() 
{
	return 0;
}
