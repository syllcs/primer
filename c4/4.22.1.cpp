#include <iostream>

using namespace std;

int main() 
{
	int score;
	while (cin >> score) {
		cout << ((score > 90) ? "high pass" : (score > 75) ? "pass" : (score > 60) ? "low pass" : "fail") << endl;
	}
	return 0;
}
