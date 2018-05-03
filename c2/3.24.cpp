#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> l;
	int num;
	while (cin >> num){
		l.push_back(num);
	}
	/*
	auto b = l.begin() + 1;
	auto e = l.end();
	while (b != e){
		cout << *b + *(b - 1) << endl;
		b += 1;
	}
	*/
	auto b = l.begin();
	auto e = l.end() - 1;
	while (b < e){
		cout << *b + *e <<endl;
		b++;
		e--;
	}
	return 0;
	return 0;
}
