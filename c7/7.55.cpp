#include <string>
#include <iostream>
#include <type_traits>

using namespace std;
class Data {
public:
	int a = 4;
	//string s("abc");
};

int main() {
	string s ("abc");
	cout << boolalpha;
	cout << is_literal_type<Data>::value << endl;
}
