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
	for (auto b = l.begin(); b != l.end(); b++){
		*b = *b * 2;
	}
	for (auto b = l.begin(); b != l.end(); b++){
		cout << *b <<endl;
	}
	return 0;
}
