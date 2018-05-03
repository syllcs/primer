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
	/*for (decltype(l.size()) i = 1; i < l.size(); i++){
		cout << (l[i-1] + l[i]) << endl;
	}*/
	auto length = l.size();
	for (decltype(l.size()) i = 0; i < length/2; i++){
		cout << (l[i] + l[length - i - 1]) << endl;
	}
	return 0;
}
