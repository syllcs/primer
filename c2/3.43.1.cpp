#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	int ia[3][4] = {1,2,3,4,5,6,7,8,9,8,7,6};
	for (int (&row)[4] : ia) {
		for (int num : row) {
			cout << num << endl;
		}
	}
	return 0;
}
