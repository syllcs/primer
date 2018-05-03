#include <iostream>

using namespace std;

void f1(int a)
{
	cout << "f1" << endl;
	return;
}

void f2(int a)
{
	cout << "f2" << endl;
	return f1(3);
}

int main()
{
	f2(3);
	return 0;
}
