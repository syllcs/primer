#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string sentence;
	getline(cin, sentence);
	auto b = sentence.begin();
	auto e = sentence.end();
	string first_word;
	int repeat = 0;
	int max_repeat = 0;
	string max_string;
	while (b != e && *b != ' ') {
		first_word += *b;
		b++;
	}
	//cout << first_word << "a " << endl;
	if (b != e) b++;
	string second_word;
	while (b != e){
		while (b != e && *b != ' ') {
			second_word += *b;
			b++;
		}
		cout << second_word;
		if (b != e) b++;
		if (second_word == first_word) {
			repeat += 1;
			if (repeat > max_repeat) {
				max_repeat = repeat;
				max_string = first_word;
			}
		}
		else {
			first_word = second_word;
		}
		second_word = "";
	}
	if (max_repeat > 0) {
		cout << max_string << " " << max_repeat+1 << endl;
	}
	else {
		cout << "None";
	}
}
