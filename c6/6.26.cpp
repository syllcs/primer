#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	if (argc < 2) return -1;
	for (int i = 0; i < argc; i++) 
		cout << argv[i] << endl;
	return 0;
}
