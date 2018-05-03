#include <iostream>
#include <iostream>
using std::string;
using std::cout;
int main()
{
	string a = "abcd";
	for (char &i: a){
		i = i + 1;
	}
	
	cout << a;
	return 0;
}
