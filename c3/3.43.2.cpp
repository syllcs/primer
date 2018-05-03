#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	int ia[3][4] = {1,2,3,4,5,6,7,8,9,8,7,6};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << ia[i][j] << endl;
		}
	}
	return 0;
}
