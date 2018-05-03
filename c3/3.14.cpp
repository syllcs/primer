#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> l;
	int i;
	while (cin >> i){
		l.push_back(i);
	}
	cout << l.size() << endl;
	return 0;
}
