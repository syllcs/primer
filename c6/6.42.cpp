#include <iostream>
#include <string>

using namespace std;

string make_plural(const string& word, string fix = "s") {
	return word + fix;
}

int main() {
	cout << make_plural("success", "es") << endl;
	cout << make_plural("failure") << endl;
}
