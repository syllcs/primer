#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> l;
	for (int i = 0; i < 10; i++){
		l.push_back(i);
	}
	for (auto i : l){
		cout << i << endl;
	}
	return 0;
}
