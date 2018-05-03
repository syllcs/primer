#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> l(11, 0);
	vector<int> scores;
	int score;
	while (cin >> score){
		if (score >= 0 && score <= 100){
			scores.push_back(score);
		}
	}
	auto b_s = scores.cbegin();
	auto e_s = scores.cend();
	auto b_l = l.begin();
	while (b_s != e_s){
		(*(b_l + (*b_s)/10))++;
		b_s++;
	}
	auto b = l.begin();
	auto e = l.end();
	while (b != e){
		cout << *b << endl;
		b++;
	}
	return 0;
}
